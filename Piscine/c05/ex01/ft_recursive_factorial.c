/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:03:56 by agruet            #+#    #+#             */
/*   Updated: 2024/07/08 16:10:30 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}*/
