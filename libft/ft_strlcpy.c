/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:24:24 by agruet            #+#    #+#             */
/*   Updated: 2024/09/24 14:40:38 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while ((i < size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* #include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
int	main(int ac, char **av)
{
	(void)ac;
	char	*d1 = strdup(av[1]);
	char	*d2 = strdup(av[1]);
	printf("DEST:        %s\n", av[1]);
	printf("SRC:         %s\n", av[2]);
	printf("STRLCPY:     %ld | %s\n", strlcpy(d1, av[2], atoi(av[3])), d1);
	printf("FT_STRLCPY:  %ld | %s", ft_strlcpy(d2, av[2], atoi(av[3])), d2);
	return (0);
} */
