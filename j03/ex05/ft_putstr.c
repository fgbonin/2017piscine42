/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 23:52:54 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/09 00:07:21 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	
	char a[i];

	str = &a[0];
	while (i <= 12)
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}