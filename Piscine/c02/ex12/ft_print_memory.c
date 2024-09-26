/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:21:32 by agruet            #+#    #+#             */
/*   Updated: 2024/08/16 22:19:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *addr, unsigned int to_print)
{
	unsigned int		i;

	i = 0;
	while (i < 16 && i < to_print)
	{
		if (addr[i] >= ' ' && addr[i] <= '~')
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	ft_putchar_hex(unsigned long long hex, int n_hex)
{
	int		i;
	char	to_write[16];
	char	*base;

	i = n_hex;
	base = "0123456789abcdef";
	while (i > 0)
	{
		to_write[i - 1] = base[hex % 16];
		hex /= 16;
		i--;
	}
	write(1, to_write, n_hex);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size || i % 16 != 0)
	{
		if (i % 16 == 0)
		{
			ft_putchar_hex((unsigned long long)addr + i, 16);
			write(1, ": ", 2);
		}
		if (i > size - 1)
			write(1, "  ", 2);
		else
			ft_putchar_hex(*(((char *) addr) + i), 2);
		if ((i + 1) % 2 == 0)
			ft_putchar(' ');
		if (++i % 16 == 0)
		{
			ft_putstr(addr + j, size - j);
			ft_putchar('\n');
			j = i;
		}
	}
	return (addr);
}

int		main(void)
{
	char    a[] = "Bonjour les aminches\0.\nc\t est fou\vtout\fce qu on peut faire avec\r\r\fprint_memory\t\n\r\rlol\flol\a \t";
	ft_print_memory((void*)a, 92);
	return (0);
}
