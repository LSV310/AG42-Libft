/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:27:26 by agruet            #+#    #+#             */
/*   Updated: 2024/09/03 18:31:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_whitespace(char *str, int i)
{
	if ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || is_whitespace(str, i))
			return (-1);
		j = 0;
		while (j < i)
		{
			if (str[j] == str[i])
				return (-1);
			j++;
		}
		i++;
	}
	return (i);
}

int	contains_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	index_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negative;
	int	result;
	int	size;

	i = 0;
	result = 0;
	negative = 1;
	size = ft_strlen(base);
	if (size <= 1)
		return (0);
	while (is_whitespace(str, i))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if ((str[i]) == '-')
			negative *= -1;
		i++;
	}
	while (contains_base(base, str[i]))
	{
		result = result * size + (index_base(base, str[i]));
		i++;
	}
	return (result * negative);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}*/
