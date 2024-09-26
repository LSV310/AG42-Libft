/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:13:35 by agruet            #+#    #+#             */
/*   Updated: 2024/09/24 13:57:18 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j] && j + i + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	if (size < i)
		return (size + ft_strlen((char *)src));
	return (i + ft_strlen((char *)src));
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
	printf("STRLCAT:     %ld | %s\n", strlcat(d1, av[2], atoi(av[3])), d1);
	printf("FT_STRLCAT:  %ld | %s", ft_strlcat(d2, av[2], atoi(av[3])), d2);
	return (0);
} */
