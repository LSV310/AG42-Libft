/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:35:39 by marvin            #+#    #+#             */
/*   Updated: 2024/08/16 18:35:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar_hex(unsigned long long i, int size)
{
	char	*base;

	base = "0123456789abcdef";
	if (size == 1)
		write(1, &base[i / 16], 1);
	else
	{
		if (i >= size)
			ft_putchar_hex(i / 16, size - 1);
	}
	write(1, &base[i % 16], 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*addr2;
	int		i;

	addr2 = addr;
	while (addr - addr2 <= size)
	{
		i = 0;
		//printf("%p", addr);
		ft_putchar_hex((unsigned long long)(addr), 16);
		write(1, ": ", 2);
		while (i < 16 || i == 0)
		{
			if (i % 2 == 0 && i != 0)
				write(1, " ", 1);
			ft_putchar_hex(*((char *)addr + i), 1);
			i++;
		}
		write(1, "\n", 1);
		addr += 16;
	}
	return (addr2);
}

int	main(void)
{
	char	a[] = "Bonjour les aminches\0.\nc\t est fou\vtout\fce qu on peut faire avec\r\r\fprint_memory\t\n\r\rlol\flol\a \t";
	ft_print_memory((void*)a, 92);
	return (0);
}
