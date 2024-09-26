/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:05:17 by agruet            #+#    #+#             */
/*   Updated: 2024/07/12 13:19:57 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(unsigned int i)
{
	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	if (i >= 10)
		ft_putnbr(i / 10);
	i = i % 10 + '0';
	write(1, &i, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_putnbr((unsigned int)argc - 1);
	write(1, "\n", 1);
	return (0);
}
