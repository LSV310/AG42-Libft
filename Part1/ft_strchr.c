/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:05:03 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (!c)
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("STRCHR:     %s\n", strchr(av[1], av[2][0]));
	printf("FT_STRCHR:  %s\n", ft_strchr(av[1], av[2][0]));
	return (0);
} */
