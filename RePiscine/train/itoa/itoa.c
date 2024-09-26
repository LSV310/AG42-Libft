/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:20:00 by marvin            #+#    #+#             */
/*   Updated: 2024/08/29 10:20:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>



char	*ft_itoa(int n)
{
	int				i;
	int				size;
	char			*str;
	unsigned int	nbr;

	i = 0;
	size = get_pow(n, &nbr);
	str = malloc(sizeof(char) * (size + 1));
	if(!str)
		return (NULL);
	if (n < 0)
		str[i++] = '-';
	str[size] = '\0';
	while (size-- > i)
	{
		str[size] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_itoa(atoi(av[1])));
	return (0);
}
