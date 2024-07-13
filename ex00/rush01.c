/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:25:34 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/13 11:29:42 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char chr);

void	print_line_middle(int x)
{
	x--;
	ft_putchar('*');
	while (x > 1)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 0)
		ft_putchar('*');
	ft_putchar(10);
}

void	print_line_ac(int x, char c1, char c2)
{
	x--;
	ft_putchar(c1);
	while (x > 1)
	{
		ft_putchar('*');
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
	print_line_ac(x, '/', '\\');
	while (y > 1)
	{
		print_line_middle(x);
		y--;
	}
	if (y > 0)
		print_line_ac(x, '\\', '/');
}
