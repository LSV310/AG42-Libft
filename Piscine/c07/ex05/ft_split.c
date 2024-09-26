/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:13:56 by marvin            #+#    #+#             */
/*   Updated: 2024/08/30 23:13:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i++] == c)
			return (1);
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;
	int	new_word;

	i = 0;
	words = 0;
	new_word = 1;
	while (str[i])
	{
		if (!is_charset(charset, str[i]))
		{
			if (new_word)
			{
				words++;
				new_word = 0;
			}
		}
		else
			new_word = 1;
		i++;
	}
	return (words);
}

void	fill_str(char *s, char *str, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
		s[i++] = str[start++];
	s[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char			**strs;
	int				words;
	int		i;
	int		j;
	int		k;

	words = count_words(str, charset);
	strs = malloc(sizeof(char *) * (words + 1));
	if (!strs)
		return (NULL);
	i = 0;
	k = 0;
	while (str[k] && i < words)
	{
		while (str[k] && is_charset(charset, str[k]))
			k++;
		j = k;
		while (str[k] && !is_charset(charset, str[k]))
			k++;
		strs[i] = malloc(sizeof(char) * (k - j + 1));
		if (!strs[i])
			return (NULL);
		fill_str(strs[i++], str, j, k);
	}
	strs[words] = 0;
	return (strs);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	int	i = 0;
	int words = count_words(av[1], av[2]);
	char **strs = ft_split(av[1], av[2]);
	while (i <= words)
	{
		printf("%d: %s\n", i, strs[i]);
		i++;
	}
	return (0);
}
