/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:43:58 by agruet            #+#    #+#             */
/*   Updated: 2024/07/02 11:24:29 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	is_upcase(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}

int	is_lowercase(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

int	is_number(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	is_alphanumeric(char str)
{
	if (is_upcase(str) || is_lowercase(str) || is_number(str))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (is_lowercase(str[0]))
		str[0] -= 32;
	while (str[i])
	{
		if (is_alphanumeric(str[i - 1]))
		{
			if (is_upcase(str[i]))
				str[i] += 32;
		}
		else
		{
			if (is_lowercase(str[i]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut, coMment tu vas ? 
		42mots quarante-deux; cinqUAnte+et+un";

	printf("%s", ft_strcapitalize(str));
	return(0);
}*/
