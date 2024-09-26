/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:04:30 by agruet            #+#    #+#             */
/*   Updated: 2024/07/10 18:28:12 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	text1[] = "Hello World";
	char	text2[50] = "";
	char	text3[50] = "";

	printf("%zu ", strlcpy(text2, text1, 5));
	printf("%s\n", text2);
	printf("%d ", ft_strlcpy(text3, text1, 5));
	printf("%s\n", text3);
	return (0);
}*/
