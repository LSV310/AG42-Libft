/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:17:06 by marvin            #+#    #+#             */
/*   Updated: 2024/08/29 13:17:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* #include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%ld\n", strlen(av[1]));
	printf("%ld", ft_strlen(av[1]));
	return (0);
} */
