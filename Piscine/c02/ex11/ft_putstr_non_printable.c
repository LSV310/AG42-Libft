/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:54:42 by agruet            #+#    #+#             */
/*   Updated: 2024/07/10 18:20:56 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i]) < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_putchar(base[(unsigned char)str[i] / 16]);
			ft_putchar(base[(unsigned char)str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int		main(void)
{
	char	str[] = {-5, -10, -120, 'b', 50, 58, 0};
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	ft_putstr_non_printable("j'aienvie\nde crever");
	return (0);
}*/
