/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:23:54 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fs;
	unsigned int	i;

	i = 0;
	fs = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!fs)
		return (NULL);
	while (s[i])
	{
		fs[i] = (*f)(i, s[i]);
		i++;
	}
	fs[i] = 0;
	return (fs);
}

/* char	str_rot(unsigned int n, char c)
{
	return (c + n);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char	*str = ft_strmapi(av[1], &str_rot);
	printf("%s", str);
	return (0);
} */
