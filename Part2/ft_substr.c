/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:24:49 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 14:43:58 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * On peut lire dans la memoire si jamais on met un start > a la taille de s
 * Ex: ./a.out "Salut" 73 80
 * 	-> DBUS_SESSION_BUS_ADDRESS=unix:path=/run/user/1000/bus%
 * Pour l'empecher il faut lire toute la chaine s et commencé à écrire à start
 * Pour l'instant j'ai laissé comme ça parce que c'est drole
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[i + start])
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = 0;
	return (str);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
} */
