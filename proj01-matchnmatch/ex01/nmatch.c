/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 20:29:47 by fbonin            #+#    #+#             */
/*   Updated: 2017/08/13 22:53:54 by fbonin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		run_checks(char *s1, char *s2)
{
	if (!*s2)
		return (*s1) ? 0 : 1;
	if (*s2 == 42 && *s2 + 1 == '\0')
		return (1);
	else
		return (-1);
}

int		nmatch(char *s1, char *s2)
{
	char	*temp;
	int		result;

	temp = s1;
	result = 0;
	if (run_checks(s1, s2) != -1)
		return run_checks(s1, s2);
	if (*s2 == '*')
	{
		while (*temp)
		{
			count += nmatch(temp, s2 + 1);
			temp++;
		}
		count += nmatch(temp, s2 + 1);
		return (count);
	}
	if (!*s1)
		return (0);
	if (*s2 == *s1)
	{
		s2++;
		s1++;
		return (nmatch(s1 + 1, s2 + 1));
	}
	else
		return (0);
}
