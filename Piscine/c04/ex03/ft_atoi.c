/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:59:22 by agruet            #+#    #+#             */
/*   Updated: 2024/07/04 16:25:46 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	result = 0;
	negative = 1;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if ((str[i]) == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * negative);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("   	  +---+++--2147483647hf84484"));
	return (0);
}*/
