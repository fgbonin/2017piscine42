/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:25:19 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/11 15:25:21 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_spy(int argc, char **argv)
{
	int i;

	i = 1;
	while (i <= argc)
	{
		if (argv == "president" || argv == "attack" || argv == "Powers")
			return (1);
		else
			return (0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1 && ft_spy(argc, argv) == 1)
	{
		write(1, "Alert!!!", 8);
		write(1, "\n", 1);
	}
	else
		return (0);
}
