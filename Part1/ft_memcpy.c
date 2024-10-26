/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 01:03:11 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
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

	ft_memcpy(ptr1, ptr2, size);
	printf("DEST:'");
	while (i < size)
	{
		printf("%c", *(ptr1 + i));
		i++;
	}
	printf("'\n");
} */
