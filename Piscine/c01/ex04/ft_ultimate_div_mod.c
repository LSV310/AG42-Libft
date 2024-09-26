/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:13:57 by agruet            #+#    #+#             */
/*   Updated: 2024/06/28 11:35:52 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	nbr;

	nbr = *a;
	*a = nbr / *b;
	*b = nbr % *b;
}

/*int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 12;
	nbr2 = 2;
	ft_ultimate_div_mod(&nbr1, &nbr2);
	printf("%d, %d\n", nbr1, nbr2);
	nbr1 = 12;
	nbr2 = 5;
	ft_ultimate_div_mod(&nbr1, &nbr2);
	printf("%d, %d", nbr1, nbr2);
}*/
