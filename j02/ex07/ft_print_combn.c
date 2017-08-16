/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:30:21 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/08 21:17:48 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		calc_limit(int n)
{
	int limit;

	limit = 0;
	if (n == 1)
		limit = 10 * 10 - 1;
	if (n == 2)
		limit = 10 * 10 * 10 - 1;
	if (n == 3)
		limit = 10 * 10 * 10 * 10 - 1;
	if (n == 4)
		limit = 10 * 10 * 10 * 10 * 10 - 1;
	if (n == 5)
		limit = 10 * 10 * 10 * 10 * 100 - 1;
	if (n == 6)
		limit = 10 * 10 * 10 * 100 * 100 - 1;
	if (n == 7)
		limit = 10 * 10 * 100 * 100 * 100 - 1;
	if (n == 8)
		limit = 10 * 100 * 100 * 100 * 100 - 1;
	if (n == 9)
		limit = 100 * 100 * 100 * 100 * 10 - 10;
	return limit;
}

void	ft_print_me(int j)
{
	ft_putchar(j + 48);
	return ;
}

void	ft_print_combn(int n)
{
	int i;

	i = 1;
	if (n <= 0)
		return ;
	if (n > 9)
		return ;
	else
	{
		while (i < calc_limit(n))
		{
			ft_print_me(i);
			ft_putchar(',');
			ft_putchar(' ');
			i++;
		}
		ft_print_me(i);
	}
	return ;
}
