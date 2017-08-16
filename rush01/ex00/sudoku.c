/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 18:22:53 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/13 23:00:55 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_num_possible(char **argv, int x, int y, int nb);

int		error_input(int argc, char **argv);

int		valid_input(int argc, char **argv);

void	next_line_if_needed(int *x, int *y)
{
	if (*x == 9)
	{
		*x = 0;
		(*y)++;
	}
}

int		resolve(char **argv, int x, int y)
{
	int	nb;
	int ret;

	nb = 1;
	next_line_if_needed(&x, &y);
	if (y == 10)
		return (1);
	if (argv[y][x] != '.')
	{
		ret = resolve(argv, x + 1, y);
		return (ret);
	}
	while (nb < 10)
	{
		if (check_num_possible(argv, x, y, nb) == 0)
		{
			argv[y][x] = 48 + nb;
			if (resolve(argv, x + 1, y) == 1)
				return (1);
		}
		nb++;
	}
	argv[y][x] = '.';
	return (0);
}

void	print_result(char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &argv[i][j], 1);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	ret;

	if (error_input(argc, argv) == -1 || valid_input(argc, argv) == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		ret = resolve(argv, 0, 1);
		if (ret == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		print_result(argv);
	}
	return (0);
}
