/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 21:23:40 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/08 23:51:11 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int x;
	int y;

	x = 5;
	y = 2;
	printf("A equals %d \n", x);
	printf("B equals %d \n", y);
	ft_ultimate_div_mod(&x, &y);
	printf("Div equals %d \n", x);
	printf("Mod equals %d \n", y);
	return (0);
}
