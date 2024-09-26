/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:52:41 by agruet            #+#    #+#             */
/*   Updated: 2024/09/03 18:29:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if(str[i] == '+' || str[i] == '-')
			return (-1);
		j = 0;
		while(j < i)
		{
			if (str[j] == str[i])
				return (-1);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	static int	size;

	size = ft_strlen(base);
	if (size <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= size)
		ft_putnbr_base(nbr / size, base);
	write(1, &base[nbr % size], 1);
}

/*#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}*/
