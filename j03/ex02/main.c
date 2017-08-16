/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 21:23:40 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/08 23:27:26 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int x;
	int y;

	x = 3;
	y = 6;
	printf("B equals %d \n", y);
	printf("A equals %d \n", x);
	ft_swap(&x, &y);
	printf("A equals %d \n", x);
	printf("B equals %d \n", y);
	return (0);
}
