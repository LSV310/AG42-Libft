/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnieto-j <vnieto-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:37:20 by vnieto-j          #+#    #+#             */
/*   Updated: 2024/06/30 14:54:49 by vnieto-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_first(int i, int j, int x);
void	print_second_and_more(int i, int j, int x, int y);
void	print_last(int i, int j, int x, int y);
void	print_first_reverse(int i, int j, int x);
void	print_last_reverse(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if ((sizeof(x) != sizeof(int) || sizeof(y) != sizeof(int)))
		return ;
	if (x < 0)
		x *= -1;
	if (y < 0)
		y *= -1;
	while (i <= x && j <= y)
	{
		if (j == 1)
			print_first(i, j, x);
		else if (j == y)
			print_last(i, j, x, y);
		else
			print_second_and_more(i, j, x, y);
		j++;
	}
}
