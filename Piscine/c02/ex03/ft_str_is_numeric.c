/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:52:10 by agruet            #+#    #+#             */
/*   Updated: 2024/07/01 15:09:09 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "ffdg515sfsd";
	char	str2[] = "2151";
	char	str3[] = "";
	int		r1;
	int		r2;
	int		r3;

	r1 = ft_str_is_numeric(str1);
	r2 = ft_str_is_numeric(str2);
	r3 = ft_str_is_numeric(str3);
	printf("%d %d %d", r1, r2, r3);
	return(0);
}*/
