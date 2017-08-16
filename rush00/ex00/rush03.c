/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciliber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 18:56:49 by sciliber          #+#    #+#             */
/*   Updated: 2017/08/06 18:56:57 by sciliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_first_last_line(int x_count, int y_count, int x, int y)
{
	while (y_count == 1 || y_count == y)
	{
		if (x_count == 1)
		{
			ft_putchar('A');
			x_count++;
		}
		else if (x_count > 1 && x_count < x)
		{
			ft_putchar('B');
			x_count++;
		}
		else if (x_count == x && x > 1)
		{
			ft_putchar('C');
			x_count++;
		}
		else
		{
			ft_putchar('\n');
			y_count++;
			x_count = 1;
		}
	}
	return (y_count);
}

int		ft_mid_line(int x_count, int y_count, int x, int y)
{
	while (y_count > 1 && y_count < y)
	{
		if (x_count == 1)
		{
			ft_putchar('B');
			x_count++;
		}
		else if (x_count > 1 && x_count < x)
		{
			ft_putchar(' ');
			x_count++;
		}
		else if (x_count == x && x > 1)
		{
			ft_putchar('B');
			x_count++;
		}
		else
		{
			ft_putchar('\n');
			y_count++;
			x_count = 1;
		}
	}
	return (y_count);
}

void	rush(int x, int y)
{
	int x_count;
	int y_count;

	x_count = 1;
	y_count = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (y_count <= y)
	{
		y_count = ft_first_last_line(x_count, y_count, x, y);
		y_count = ft_mid_line(x_count, y_count, x, y);
		y_count = ft_first_last_line(x_count, y_count, x, y);
	}
	return ;
}
