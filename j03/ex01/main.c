/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 21:23:40 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/08 23:17:26 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
		int ********nbr8;
		int *******nbr7;
		int ******nbr6;
		int *****nbr5;
		int ****nbr4;
		int ***nbr3;
		int **nbr2;
		int *nbr1;
		int a;
		int *********nbr;

		a = 42;
		nbr1 = &a;
		nbr2 = &nbr1;
		nbr3 = &nbr2;
		nbr4 = &nbr3;
		nbr5 = &nbr4;
		nbr6 = &nbr5;
		nbr7 = &nbr6;
		nbr8 = &nbr7;
		nbr = &nbr8;

	printf("%d", *********nbr);
	return (0);
}
