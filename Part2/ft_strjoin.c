/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:51:39 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s_s1;
	size_t	s_s2;
	size_t	i;
	size_t	j;

	s_s1 = ft_strlen(s1);
	s_s2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (s_s1 + s_s2 + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (j < s_s1)
		str[i++] = s1[j++];
	j = 0;
	while (j < s_s2)
		str[i++] = s2[j++];
	str[i] = 0;
	return (str);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char	*str = ft_strjoin(av[1], av[2]);
	printf("%s", str);
	return (0);
} */
