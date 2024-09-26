/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:23:27 by agruet            #+#    #+#             */
/*   Updated: 2024/07/01 14:49:48 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "ffdsfsd";
	char	str2[] = "h2151gjgfgd";
	char	str3[] = "";
	int		r1;
	int		r2;
	int		r3;

	r1 = ft_str_is_alpha(str1);
	r2 = ft_str_is_alpha(str2);
	r3 = ft_str_is_alpha(str3);
	printf("%d %d %d", r1, r2, r3);
	return(0);
}*/
