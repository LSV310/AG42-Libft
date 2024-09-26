/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnieto-j <vnieto-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:55:06 by vnieto-j          #+#    #+#             */
/*   Updated: 2024/06/30 14:53:13 by vnieto-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_first(int i, int j, int x)
{
	while (i <= x)
	{
		if (i == 1 && j == 1)
			ft_putchar('o');
		else if (i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	print_second_and_more(int i, int j, int x, int y)
{
	while (i <= x)
	{
		if ((j > 1 && j < y) && (i == 1))
			ft_putchar('|');
		else if ((i == x) && (j > 1 && j < y))
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	print_last(int i, int j, int x, int y)
{
	while (i <= x)
	{
		if (i == 1 && j == y)
			ft_putchar('o');
		else if (i == x && j == y)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}
