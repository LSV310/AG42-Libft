/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:03:24 by agruet            #+#    #+#             */
/*   Updated: 2024/09/25 12:50:28 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (n-- > i)
			*((char *)dest + n) = *((char *)src + n);
	}
	else
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char	*ptr1 = av[1];
	char	*ptr2 = av[2];
	int		i = 0;
	int		size = atoi(av[3]);

	ft_memmove(ptr1, ptr2, size);
	printf("DEST:'");
	while (i < size)
	{
		printf("%c", *(ptr1 + i));
		i++;
	}
	printf("'\n");
} */
