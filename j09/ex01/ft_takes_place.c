/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:20:58 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/11 15:21:52 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	int start;
	int end;

	start = hour % 12;
	end = hour % 12 + 1;
	if (hour < 0 || hour > 23)
		return ;
	else
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		if (hour == 11)
			printf("%d.00 A.M. AND %d.00 P.M.\n", start, end);
		else if (hour == 23)
			printf("%d.00 P.M. AND 12.00 A.M.\n", start);
		else if (hour == 0)
			printf("12.00 A.M. AND %d.00 A.M.\n", end);
		else if (hour == 12)
			printf("12.00 P.M. AND %d.00 P.M.\n", end);
		else if (hour > 12 && hour < 23)
			printf("%d.00 P.M. AND %d.00 P.M.\n", start, end);
		else if (hour < 12 && hour > 0)
			printf("%d.00 A.M. AND %d.00 A.M.\n", start, end);
		return ;
	}
}
