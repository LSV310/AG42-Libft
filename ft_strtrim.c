/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:54:11 by agruet            #+#    #+#             */
/*   Updated: 2024/11/18 10:29:10 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char const *set, int c)
{
	int	i;
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (in_set(set, s1[i]))
		i++;
	while (in_set(set, s1[j]))
		j--;
	size = j - i + 1;
	if (size < 0)
		size = 0;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	j = 0;
	while (j < size)
		new[j++] = s1[i++];
	new[j] = 0;
	return (new);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strtrim(av[1], av[2]));
	return (0);
}
