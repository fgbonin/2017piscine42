/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciliber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 12:11:05 by sciliber          #+#    #+#             */
/*   Updated: 2017/08/05 17:20:43 by sciliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_firstline(int x_count, int y_count, int x, int y);
void	ft_midline(int x_count, int y_count, int x, int y);
void	ft_lastline(int x_count, int y_count, int x, int y);


void	rush(int x, int y)
{
	int	x_count;
	int	y_count;

	x_count = 1;
	y_count = 1;

	if (x <= 0 || y <= 0)
	{
		return ;
	}

	while (x_count <= x && y_count <= y)
	{
		ft_firstline(x_count, y_count, x, y)
		{
			 while (y_count == 1)
		   {
		           if (x_count == 1)
		           {
		               ft_putchar('A');
		                x_count++;
		           }
		          else if (x_count > 1 && x_count < x)
		       {
		                ft_putchar('B');
		                 x_count++;
		            }
		             else if (x_count == x)
		           {
		                 ft_putchar('C');
		                 ft_putchar('\n');
		               y_count++;
		    x_count = 1;
		}
		else
			{
				ft_putchar('\n');
				y_count++;
				x_count = 1;
			}
		}
		ft_midline()
		{

		}
		ft_lastline()
		{
		}
	}
	return ;
}
		while (y_count == 1)
		{
			if (x_count == 1)
			{	
				ft_putchar('A');	
				x_count++;
			}
			else if (x_count > 1 && x_count < x)
			{
				ft_putchar('B');
				x_count++;
			}
			else if (x_count == x)
			{	
				ft_putchar('C');
				ft_putchar('\n');
				y_count++;
				x_count = 1;
			}
			else
			{
				ft_putchar('\n');
				y_count++;
				x_count = 1;
			}
		}
		while (y_count > 1 && y_count < y)
		{
			if (x_count == 1)
			{
				ft_putchar('B');
				x_count++;
			}
			else if (x_count > 1 && x_count < x)
			{
				ft_putchar(' ');
				x_count++;
			}
			else
			{
				ft_putchar('B');
				ft_putchar('\n');
				y_count++;
				x_count = 1;
			}
		}
		while (y_count == y) 
		{
			if (x_count == 1)
			{
				ft_putchar('C');
				x_count++;
			}
			else if (x_count > 1 && x_count < x)
			{
				ft_putchar('B');
				x_count++;
			}
			else if (x_count == x)
			{
				ft_putchar('A');
				ft_putchar('\n');
				y_count++;
				x_count++;
			}
			else
			{
				ft_putchar('\n');
				return ;
			}
		}
		return ;
	}
}
