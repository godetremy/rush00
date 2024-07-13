/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 08:45:01 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/13 10:34:22 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void print_line_middle(int x)
{
	x--;
	ft_putchar('B');
	while(x > 1)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 0)
		ft_putchar('B');
	ft_putchar(10);
}

void print_line_ac(int x, char c)
{
	x--;
	ft_putchar(c);
	while(x > 1)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 0)
		ft_putchar(c);
	ft_putchar(10);
}

void rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	y--;
	print_line_ac(x, 'A');
	while(y > 1)
	{
		print_line_middle(x);
		y--;
	}
	if (y > 0)
		print_line_ac(x, 'C');
}
