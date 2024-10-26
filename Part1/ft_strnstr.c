/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:43:58 by marvin            #+#    #+#             */
/*   Updated: 2024/08/30 10:43:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack || !needle)
		return (NULL);
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j]
			&& haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
int    main(int ac, char **av)
{
    (void)ac;
    printf("%s\n", strnstr(av[1], av[2], atoi(av[3])));
    printf("%s", ft_strnstr(av[1], av[2], atoi(av[3])));
    return (0);
} */
