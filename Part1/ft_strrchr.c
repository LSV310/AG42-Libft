/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:29:33 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	if (!c)
		return ((char *)s + s_len);
	while (s_len >= 0)
	{
		if (s[s_len] == c)
			return ((char *)s + s_len);
		s_len--;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("STRRCHR:     %p\n", strrchr(av[1], av[2][0]));
	printf("FT_STRRCHR:  %p\n", ft_strrchr(av[1], av[2][0]));
	return (0);
} */
