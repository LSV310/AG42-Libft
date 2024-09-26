/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:49:56 by agruet            #+#    #+#             */
/*   Updated: 2024/07/11 18:34:31 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return (0);
	i = max - min;
	tab = malloc(sizeof(int) * i);
	i--;
	if (!tab)
		return (0);
	while (i >= 0)
	{
		tab[i] = max - 1;
		i--;
		max--;
	}
	return (tab);
}

/*#include <stdio.h>
int		main(void)
{
	int	*tab = ft_range(2, 5);
	printf("%d %d %d", tab[0], tab[1], tab[2]);
	return (0);
}*/
