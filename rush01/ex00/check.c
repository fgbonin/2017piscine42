/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 17:23:26 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/13 23:10:40 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line(char **argv, int y, int nb)
{
	int	j;
	int	n;

	n = 0;
	j = 0;
	while (j < 9)
	{
		if (argv[y][j] == 48 + nb)
			n++;
		j++;
	}
	return (n);
}

int	check_column(char **argv, int x, int nb)
{
	int i;
	int	n;

	n = 0;
	i = 1;
	while (i < 10)
	{
		if (argv[i][x] == 48 + nb)
			n++;
		i++;
	}
	return (n);
}

int	check_box(char **argv, int x, int y, int nb)
{
	int	i;
	int j;
	int	n;

	n = 0;
	j = x - x % 3;
	i = y - y % 3;
	while (j < (x - x % 3 + 3))
	{
		i = y - y % 3;
		while (i < (y - y % 3 + 3))
		{
			if (argv[i + 1][j] == 48 + nb)
				n++;
			i++;
		}
		j++;
	}
	return (n);
}

int	check_num_possible(char **argv, int x, int y, int nb)
{
	int	possible;

	possible = check_line(argv, y, nb);
	possible = possible + check_column(argv, x, nb);
	possible = possible + check_box(argv, x, y - 1, nb);
	return (possible);
}
