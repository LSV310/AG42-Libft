/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:51:42 by agruet            #+#    #+#             */
/*   Updated: 2024/07/11 18:09:38 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	i = 0;
	s = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!s)
		return (0);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

/*#include <stdio.h>
int		main(void)
{
	printf("%s", ft_strdup("ghkkfg"));
	return (0);
}*/
