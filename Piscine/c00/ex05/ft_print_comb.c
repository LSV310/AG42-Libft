/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:56:30 by agruet            #+#    #+#             */
/*   Updated: 2024/07/13 12:03:11 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int i)
{
	if (i >= 10)
		ft_putnbr(i / 10);
	i = i % 10 + '0';
	write(1, &i, 1);
}

void	ft_print_comb(void)
{
	int	i;

	i = 0;
	while (i <= 689)
	{
		if(i / 100 < i / 10 % 10 && i / 10 % 10 < i %10)
		{
			if (i < 100)
				write(1, "0", 1);
			ft_putnbr(i);
			write(1, ", ", 2);
		}
		i++;
	}
	write(1, "789", 3);
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
