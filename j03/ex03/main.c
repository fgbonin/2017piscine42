/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 21:23:40 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/08 23:35:35 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int x;
	int y;
	int div;
	int mod;

	x = 5;
	y = 2;
	printf("A equals %d \n", x);
	printf("B equals %d \n", y);
	ft_div_mod(x, y, &div, &mod);
	printf("Div equals %d \n", div);
	printf("Mod equals %d \n", mod);
	return (0);
}
