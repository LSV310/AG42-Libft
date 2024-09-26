/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:13:58 by agruet            #+#    #+#             */
/*   Updated: 2024/06/29 10:43:32 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab1[5] = {2, 6, 5, 8, 4};
	int     tab2[6] = {9, 2, 6, 8, 4, 7};
	int	i;

	i = 0;
	printf("%d,%d,%d,%d,%d\n", tab1[0], tab1[1], tab1[2], tab1[3], tab1[4]);
	ft_sort_int_tab(tab1, 5);
	printf("%d,%d,%d,%d,%d\n\n", tab1[0], tab1[1], tab1[2], tab1[3], tab1[4]);

	printf("%d,%d,%d,%d,%d,%d\n", tab2[0], tab2[1], tab2[2], 
					tab2[3], tab2[4], tab2[5]);
	ft_sort_int_tab(tab2, 6);
	printf("%d,%d,%d,%d,%d,%d\n", tab2[0], tab2[1], tab2[2], 
					tab2[3], tab2[4], tab2[5]);
	return (0);
}*/
