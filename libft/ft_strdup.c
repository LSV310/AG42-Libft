/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:29:58 by agruet            #+#    #+#             */
/*   Updated: 2024/09/24 01:03:26 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		size;
	int		i;

	size = 0;
	while (s[size])
		size++;
	dup = malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char *str = ft_strdup(av[1]);
	printf("adress:%p | value:%s\n", av[1], av[1]);
	printf("adress:%p | value:%s\n", str, str);
	return (0);
} */
