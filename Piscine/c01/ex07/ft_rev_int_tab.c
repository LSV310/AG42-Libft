/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:47:02 by agruet            #+#    #+#             */
/*   Updated: 2024/06/29 10:07:25 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = size - 1;
	j = 0;
	while (i >= size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i--;
		j++;
	}
}

/*int	main(void)
{
	int	tab1[5] = {2, 5, 6, 8, 4};
	int     tab2[6] = {2, 5, 6, 8, 4, 9};
	int	i;

	i = 0;
	printf("%d,%d,%d,%d,%d\n", tab1[0], tab1[1], tab1[2], tab1[3], tab1[4]);
	ft_rev_int_tab(tab1, 5);
	printf("%d,%d,%d,%d,%d\n\n", tab1[0], tab1[1], tab1[2], tab1[3], tab1[4]);

	printf("%d,%d,%d,%d,%d,%d\n", tab2[0], tab2[1], tab2[2], 
					tab2[3], tab2[4], tab2[5]);
	ft_rev_int_tab(tab2, 6);
	printf("%d,%d,%d,%d,%d,%d\n", tab2[0], tab2[1], tab2[2], 
					tab2[3], tab2[4], tab2[5]);
	return (0);
}*/
