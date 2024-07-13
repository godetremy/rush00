/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:35:59 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/13 11:39:45 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char chr);

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

void	print_line_ac(int x, char c1, char c2)
{
	x--;
	ft_putchar(c1);
	while (x > 1)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 0)
		ft_putchar(c2);
	ft_putchar(10);
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	y--;
	print_line_ac(x, 'A', 'C');
	while (y > 1)
	{
		print_line_middle(x);
		y--;
	}
	if (y > 0)
		print_line_ac(x, 'C', 'A');
}
