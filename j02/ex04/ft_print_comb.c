/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 20:26:47 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/05 23:00:02 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_me(int p, int q, int r)
{
	ft_putchar(p + 48);
	ft_putchar(q + 48);
	ft_putchar(r + 48);
}

void	ft_print_comb(int i, int j, int k)
{
	i = 0;
	j = 1;
	k = 2;
	while ((i * 100 + j * 10 + k) < 789)
	{
		ft_print_me(i, j, k);
		ft_putchar(',');
		ft_putchar(' ');
		if (k == 9 && j < 8)
		{
			j++;
			k = j + 1;
		}
		else if (j == 8 && i < 7)
		{
			i++;
			j = i + 1;
			k = j + 1;
		}
		else
			k++;
	}
	ft_print_me(i, j, k);
}
