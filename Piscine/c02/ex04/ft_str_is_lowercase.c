/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:01:57 by agruet            #+#    #+#             */
/*   Updated: 2024/07/01 15:13:06 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "ffdgsfsd";
	char	str2[] = "gfdgTdsfsfghf";
	char	str3[] = "";
	int		r1;
	int		r2;
	int		r3;

	r1 = ft_str_is_lowercase(str1);
	r2 = ft_str_is_lowercase(str2);
	r3 = ft_str_is_lowercase(str3);
	printf("%d %d %d", r1, r2, r3);
	return(0);
}*/
