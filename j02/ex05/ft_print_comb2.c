/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 23:11:35 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/08 20:48:53 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_me(int p, int q, int r, int s)
{
	ft_putchar(p + 48);
	ft_putchar(q + 48);
	ft_putchar(' ');
	ft_putchar(r + 48);
	ft_putchar(s + 48);
}

void	ft_print_comb2(int a, int b, int c, int d)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((i * 100 + j) < 9899)
	{
		a = i / 10;
		b = i % 10;
		c = j / 10;
		d = j % 10;
		ft_print_me(a, b, c, d);
		ft_putchar(',');
		ft_putchar(' ');
		if (j == 99)
		{
			i++;
			j = i + 1;
		}
		else
			j++;
	}
	b++;
	ft_print_me(a, b, c, d);
}
