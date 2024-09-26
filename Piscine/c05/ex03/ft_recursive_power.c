/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:46:29 by agruet            #+#    #+#             */
/*   Updated: 2024/07/06 19:01:05 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/
