/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 19:30:10 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/13 23:41:26 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_num_possible(char **argv, int x, int y, int nb);

int		find_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		valid_input(int argc, char **argv)
{
	int i;
	int j;
	int valid;

	i = 1;
	valid = 0;
	while (i < argc)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] >= 49 && argv[i][j] <= 57)
			{
				if (check_num_possible(argv, j, i, argv[i][j] - 48) != 3)
					return (-1);
				valid++;
			}
			j++;
		}
		i++;
	}
	if (valid < 17)
		return (-1);
	else
		return (0);
}

int		check_diff_num(char **argv, int argc)
{
	int tab[4];

	tab[3] = 0;
	tab[2] = 1;
	while (tab[2] < 10)
	{
		tab[0] = 1;
		while (tab[0] < argc)
		{
			tab[1] = 0;
			while (tab[1] < 9)
			{
				if (argv[tab[0]][tab[1]] == (tab[2] + 48))
				{
					tab[3]++;
					tab[1] = 9;
					tab[0] = 10;
				}
				tab[1]++;
			}
			tab[0]++;
		}
		tab[2]++;
	}
	return (tab[3]);
}

int		error_input(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc != 10 || check_diff_num(argv, argc) < 8)
		return (-1);
	while (i < argc)
	{
		j = 0;
		if (find_length(argv[i]) != 9)
			return (-1);
		else
		{
			while (j < 9)
			{
				if ((argv[i][j] < 49 && argv[i][j] != 46) || argv[i][j] > 57)
					return (-1);
				else
					j++;
			}
			i++;
		}
	}
	return (0);
}
