/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:18:30 by agruet            #+#    #+#             */
/*   Updated: 2024/07/01 15:31:19 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "ffdg  515sy6y)#^~ fsd";
	char	str2[] = "2151";
	char	str3[] = "";
	int		r1;
	int		r2;
	int		r3;

	r1 = ft_str_is_printable(str1);
	r2 = ft_str_is_printable(str2);
	r3 = ft_str_is_printable(str3);
	printf("%d %d %d", r1, r2, r3);
	return(0);
}*/
