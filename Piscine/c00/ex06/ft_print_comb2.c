/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:02:27 by agruet            #+#    #+#             */
/*   Updated: 2024/07/13 12:59:30 by agruet           ###   ########.fr       */
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

void	ft_print_comb2(void)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i <= 97)
	{
		j = 0;
		while (j <= 99)
		{
			if(i < j)
			{
				if (i < 10)
					write(1, "0", 1);
				ft_putnbr(i);
				write(1, " ", 1);
				if (j < 10)
					write(1, "0", 1);
				ft_putnbr(j);
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
	write(1, "98 99", 5);
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
