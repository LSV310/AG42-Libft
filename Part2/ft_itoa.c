/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:50:59 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static int	get_pow(unsigned int n)
{
	int	pow;

	pow = 1;
	while (n >= 10)
	{
		n /= 10;
		pow++;
	}
	return (pow);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	int				size;
	int				is_negative;

	is_negative = 0;
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		is_negative = 1;
	}
	size = get_pow(nbr) + is_negative;
	str = malloc(sizeof(char) * (size + 1));
	str[size] = 0;
	if (is_negative)
		str[0] = '-';
	while (--size >= is_negative)
	{
		str[size] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

/* int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char	*str = ft_itoa(atoi(av[1]));
	printf("%s\n", str);
	return (0);
} */
