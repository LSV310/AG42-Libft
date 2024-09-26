/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:23:36 by agruet            #+#    #+#             */
/*   Updated: 2024/09/24 10:43:27 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("salut", "salit", 3));
	printf("%d\n", ft_strncmp("salut", "salit", 4));
	printf("%d\n", ft_strncmp("salut", "niudf", 0));
	return (0);
} */
