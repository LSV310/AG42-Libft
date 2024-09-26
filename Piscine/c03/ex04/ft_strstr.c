/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:50:18 by agruet            #+#    #+#             */
/*   Updated: 2024/09/26 11:59:16 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	char	str[] = "hrthrtssalutrrr";
	char	to_find1[] = "salut";
	char	to_find2[] = "";

	printf("%s\n", ft_strstr(str, to_find1));
	printf("%s", ft_strstr(str, to_find2));
	return (0);
} */
