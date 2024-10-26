/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:11:36 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	new_word;

	i = 0;
	count = 0;
	new_word = 1;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (new_word)
			{
				count++;
				new_word = 0;
			}
		}
		else
			new_word = 1;
		i++;
	}
	return (count);
}

static void	fill_str(char *str, char const *s, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start < end)
		str[i++] = s[start++];
	str[i] = 0;
}

// Un byte n'est pas free si jms s fini par le sep
// car il malloc strs[i] avec le sep.
/* char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	size_t	k;

	strs = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		k = j;
		while (s[j] && s[j] != c)
			j++;
		strs[i] = malloc(sizeof(char) * (j - k + 1));
		if (!strs[i])
			return (NULL);
		if (j > k)
			fill_str(strs[i++], s, k, j);
	}
	strs[i] = 0;
	return (strs);
} */

// Version avec le probleme régler sauf que ça a vite fais le sida
// a cause de calloc mais bon on va dire que c'est pour la *SÉCURITÉ*
char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	words;
	size_t	i;
	size_t	j;
	size_t	k;

	words = count_words(s, c);
	strs = ft_calloc(words + 1, sizeof(char *));
	if (!strs || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j] && i < words)
	{
		while (s[j] && s[j] == c)
			j++;
		k = j;
		while (s[j] && s[j] != c)
			j++;
		strs[i] = malloc(sizeof(char) * (j - k + 1));
		if (!strs[i])
			return (NULL);
		fill_str(strs[i++], s, k, j);
	}
	return (strs);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	int	i = 0;
	int words = count_words(av[1], av[2][0]);
	char **strs = ft_split(av[1], av[2][0]);

	printf("pointer: %p\n", strs);
	printf("words: %d\n", words);
	while (i <= words)
	{
		printf("%d: %s\n", i, strs[i]);
		i++;
	}
	i = 0;
	while (i <= words)
		free(strs[i++]);
	free(strs);
	return (0);
} */
