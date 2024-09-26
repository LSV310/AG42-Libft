/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnieto-j <vnieto-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:55:06 by vnieto-j          #+#    #+#             */
/*   Updated: 2024/06/30 15:08:16 by vnieto-j         ###   ########.fr       */
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
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	print_second_and_more(int i, int j, int x, int y)
{
	while (i <= x)
	{
		if ((j > 1 && j < y + 1) && (i == 1))
			ft_putchar('B');
		else if ((i == x) && (j > 1 && j < y + 1))
			ft_putchar('B');
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
			ft_putchar('A');
		else if (i == x && j == y)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	print_first_reverse(int i, int j, int x)
{
	while (i <= x)
	{
		if (i == 1 && j == 1)
			ft_putchar('C');
		else if (i == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}
