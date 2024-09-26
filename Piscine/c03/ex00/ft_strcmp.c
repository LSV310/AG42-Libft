/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:01:05 by agruet            #+#    #+#             */
/*   Updated: 2024/09/24 10:38:00 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strcmp("salut", "saluz"));
	printf("%d\n", ft_strcmp("salut", "salua"));
	printf("%d\n", ft_strcmp("salut", "salut"));
	return (0);
} */
