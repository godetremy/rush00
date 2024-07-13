/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:04:21 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/13 12:01:56 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char chr);

void	print_line_middle(int x)
{
	x--;
	ft_putchar('|');
	while (x > 1)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 0)
		ft_putchar('|');
	ft_putchar(10);
}

void	print_line_ac(int x)
{
	x--;
	ft_putchar('o');
	while (x > 1)
	{
		ft_putchar('-');
		x--;
	}
	if (x > 0)
		ft_putchar('o');
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
