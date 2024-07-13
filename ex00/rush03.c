/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:51:29 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/13 10:54:58 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	print_line_middle(int x)
{
	x--;
	ft_putchar('B');
	while (x > 1)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 0)
		ft_putchar('B');
	ft_putchar(10);
}

void	print_line_ac(int x)
{
	x--;
	ft_putchar('A');
	while (x > 1)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 0)
		ft_putchar('C');
	ft_putchar(10);
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	y--;
	print_line_ac(x);
	while (y > 1)
	{
		print_line_middle(x);
		y--;
	}
	if (y > 0)
		print_line_ac(x);
}
