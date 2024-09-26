/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:31:00 by marvin            #+#    #+#             */
/*   Updated: 2024/09/03 18:31:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == 32
			|| (str[i] >= 9 && str[i] <= 13))
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

int	index_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
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
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if ((str[i]) == '-')
			negative *= -1;
		i++;
	}
	while (index_base(base, str[i]) >= 0)
	{
		result = result * size + (index_base(base, str[i]));
		i++;
	}
	return (result * negative);
}

int	get_pow(int n, unsigned int *nbr, int size)
{
	int				i;
	int				count;

	i = 1;
	count = 0;
	if (n >= 0)
		*nbr = n;
	else
	{
		count++;
		*nbr = -n;
	}
	while (*nbr / i >= size)
	{
		i *= size;
		count++;
	}
	return (count + 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				i;
	int				size;
	char			*str;
	int				n;
	unsigned int	nb;

	i = 0;
	if (ft_strlen(base_to) <= 1 || ft_strlen(base_from) <= 1)
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	size = get_pow(n, &nb, ft_strlen(base_to));
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[i++] = '-';
	str[size] = '\0';
	while (size-- > i)
	{
		str[size] = base_to[nb % ft_strlen(base_to)];
		nb /= ft_strlen(base_to);
	}
	return (str);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}*/
