/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 16:25:48 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/08 20:27:35 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void	ft_putchar(char c);

void	print_edge_case(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
	return ;
}

void	int_to_char(int nb)
{
	int x;
	int digit;
	int init_digit;
	int divisor;

	x = 0;
	init_digit = 0;
	divisor = 1000000000;
	while (x < 10)
	{
		digit = nb / divisor;
		nb = nb % divisor;
		divisor = divisor / 10;
		if (digit > 0 && init_digit == 0)
			init_digit = digit;
		if (digit == 0 && init_digit == 0)
			x++;
		else
		{
			ft_putchar(digit + 48);
			x++;
		}
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= INT_MIN && nb <= INT_MAX)
	{
		if (nb == 0)
			ft_putchar('0');
		else if (nb == INT_MIN)
			print_edge_case();
		else if (nb < 0)
		{
			ft_putchar('-');
			int_to_char(-nb);
		}
		else
			int_to_char(nb);
	}
	return ;
}
