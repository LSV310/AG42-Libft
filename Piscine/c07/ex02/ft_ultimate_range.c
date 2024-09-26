/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:51:12 by agruet            #+#    #+#             */
/*   Updated: 2024/07/11 18:41:40 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	len = i;
	*range = malloc(sizeof(int) * i);
	i--;
	if (!range)
		return (-1);
	while (i >= 0)
	{
		(*range)[i] = max - 1;
		i--;
		max--;
	}
	return (len);
}

/*#include <stdio.h>
int		main(void)
{
	int		*range;
	printf("%d\n", ft_ultimate_range(&range, 2, 5));
	printf("%d, %d, %d", range[0], range[1], range[2]);
	return (0);
}*/
