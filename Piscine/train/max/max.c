/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:28:36 by agruet            #+#    #+#             */
/*   Updated: 2024/07/12 13:36:05 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	static int		maxi;

	i = 0;
	while (i <= len)
	{
		if (tab[maxi] > tab[i])
			maxi = i;
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	int	tab[] = {8,5,6,2,5,0,3,9};
	printf("%d", max(tab, 8));
}
