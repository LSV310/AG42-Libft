/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:40:28 by marvin            #+#    #+#             */
/*   Updated: 2024/08/16 17:40:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(char u, char d, char c)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (!(u == '9' && d == '8' && c == '7'))
		write(1, ", ", 1);
}

void	ft_print_comb(void)
{
	int	u;
	int	d;
	int	c;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				ft_print_number(u + '0', d + '0', c + '0');
				u++;
			}
			d++;
		}
		c++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return 0;
}*/
