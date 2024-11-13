/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:02:33 by agruet            #+#    #+#             */
/*   Updated: 2024/11/13 11:52:07 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	/* char	*dest1 = ft_strdup(av[1]);
	char	*dest2 = ft_strdup(av[1]);
	size_t	ft_strlc = ft_strlcat(dest1, av[1], atoi(av[2]));
	printf("FT_STRLCAT: %s | %ld\n", dest1, ft_strlc);
	size_t	strlc = strlcat(dest2, av[1], atoi(av[2]));
	printf("STRLCAT:    %s | %ld", dest2, strlc); */

	/* printf("STRLCPY:    %s | %ld \n", dest2, strlcp);
	size_t ft_strlcp = ft_strlcpy(dest1, NULL, 6);
	printf("FT_STRLCPY: %s | %ld \n", dest1, ft_strlcp); */

	printf("STRRCHR:    %s\n",strrchr(av[1], *av[2]));
	printf("FT_STRRCHR: %s\n",ft_strrchr(av[1], *av[2]));
}
