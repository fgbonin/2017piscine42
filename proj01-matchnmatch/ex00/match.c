/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 13:10:28 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/13 20:27:10 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	int	a;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		a = 0;
		if (s1[i] == s2[j])
			j++;
		if (s2[j] == '*')
		{
			if (s1[i + 1] == s2[j + 1])
				j++;
			if (s1[i + 1] == '\0')
				return (1);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[j] == '\0')
		a = 1;
	return (a);
}
