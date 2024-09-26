/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:42:49 by agruet            #+#    #+#             */
/*   Updated: 2024/07/11 20:31:14 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_concat(char *str, int len, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < len)
	{
		k = 0;
		while (strs[j][k])
		{
			str[i++] = strs[j][k++];
		}
		k = 0;
		while (sep[k] && i < len)
		{
			str[i++] = sep[k++];
		}
		j++;
	}
	str[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	str = "";
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return ("");
	if (size == 0)
		return (str);
	ft_concat(str, len, strs, sep);
	return (str);
}

/*#include <stdio.h>
int		main(int argc, char **argv)
{
	(void)argc;
	char *result = ft_strjoin(argc, argv, " | ");
	printf("%s", result);
	free(result);
	return (0);
}*/
