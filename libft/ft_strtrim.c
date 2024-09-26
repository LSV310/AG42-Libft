/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:45:58 by agruet            #+#    #+#             */
/*   Updated: 2024/09/25 18:33:58 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_cpy;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_charset(s1[start], set))
		start++;
	while (end >= start && is_charset(s1[end - 1], set))
		end--;
	s1_cpy = malloc(sizeof(char) * (end - start + 1));
	if (!s1_cpy)
		return (NULL);
	i = 0;
	while (start < end)
		s1_cpy[i++] = s1[start++];
	s1_cpy[i] = 0;
	return (s1_cpy);
}

/* #include <stdio.h>
int	main(int ac, char**av)
{
	(void)ac;
	printf("%s", ft_strtrim(av[1], av[2]));
	return (0);
} */
