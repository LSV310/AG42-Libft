/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:02:33 by agruet            #+#    #+#             */
/*   Updated: 2024/11/19 14:36:48 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <ctype.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	new_word;
	int	count;

	i = 0;
	new_word = 1;
	count = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (new_word)
			{
				new_word = 0;
				count++;
			}
		}
		else
			new_word = 1;
		i++;
	}
	return (count);
}

static void	*free_tab(char **tab, int nb)
{
	int	i;

	i = 0;
	while (i < nb)
		free(tab[i++]);
	free(tab);
	return (NULL);
}

char	rot_2(unsigned int i, char c)
{
	return (c + 2);
}

void	rot_3(unsigned int i, char *s)
{
	*s = *s + 3;
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	int	count = 0;
	int	i = 0;

	// * isalpha
	count = 0;
	char	alpha1 = 'A';
	char	alpha2 = 'z';
	char	alpha3 = '8';
	if (isalpha(alpha1) == ft_isalpha(alpha1))
		count++;
	if (isalpha(alpha2) == ft_isalpha(alpha2))
		count++;
	if (isalpha(alpha3) == ft_isalpha(alpha3))
		count++;
	if (count == 3)
		printf("isalpha:  OK!\n");
	else
		printf("isalpha:  Error:%d/3\n", count);

	// * isdigit
	count = 0;
	char	digit1 = '0';
	char	digit2 = 'z';
	if (isdigit(digit1) == ft_isdigit(digit1))
		count++;
	if (isdigit(digit2) == ft_isdigit(digit2))
		count++;
	if (count == 2)
		printf("isdigit:  OK!\n");
	else
		printf("isdigit:  Error:%d/2\n", count);

	// * isalnum
	count = 0;
	char	alnum1 = '0';
	char	alnum2 = 'z';
	char	alnum3 = ';';
	if (isalnum(alnum1) == ft_isalnum(alnum1))
		count++;
	if (isalnum(alnum2) == ft_isalnum(alnum2))
		count++;
	if (isalnum(alnum3) == ft_isalnum(alnum3))
		count++;
	if (count == 3)
		printf("isalnum:  OK!\n");
	else
		printf("isalnum:  Error:%d/3\n", count);

	// * isascii
	count = 0;
	int	ascii1 = 97;
	int	ascii2 = 128;
	if (isascii(ascii1) == ft_isascii(ascii1))
		count++;
	if (isascii(ascii2) == ft_isascii(ascii2))
		count++;
	if (count == 2)
		printf("isascii:  OK!\n");
	else
		printf("isascii:  Error:%d/2\n", count);

	// * isprint
	count = 0;
	int	print1 = 10;
	int	print2 = 117;
	if (isprint(print1) == ft_isprint(print1))
		count++;
	if (isprint(print2) == ft_isprint(print2))
		count++;
	if (count == 2)
		printf("isprint:  OK!\n");
	else
		printf("isprint:  Error:%d/2\n", count);

	// * strlen
	count = 0;
	char	*strlen1 = "";
	char	*strlen2 = "salut";
	if (strlen(strlen1) == ft_strlen(strlen1))
		count++;
	if (strlen(strlen2) == ft_strlen(strlen2))
		count++;
	if (count == 2)
		printf("strlen:   OK!\n");
	else
		printf("strlen:   Error:%d/2\n", count);

	// * memset
	i = 0;
	char	memset1[] = "salut";
	char	*memset_og = memset(memset1, 'x', 5);
	char	*memset_me = ft_memset(memset1, 'x', 5);
	// printf("------------\nMEMSET:\n");
	// printf("OG: ");
	// while (i < 5)
	// 	printf("%c ", memset_og[i++]);
	// printf("\n");
	// printf("ME: ");
	// i = 0;
	// while (i < 5)
	// 	printf("%c ", memset_me[i++]);
	// printf("\n------------\n");
	if (memcmp(memset_og, memset_me, 5) == 0)
		printf("memset:   OK!\n");
	else
		printf("memset:   Error\n");

	// * bzero
	i = 0;
	int		bzero1[] = {9, 61, 64, 51, 64};
	int		bzero2[5];
	memcpy(bzero2, bzero1, 5 * sizeof(int));
	bzero(bzero1, 5 * sizeof(int));
	ft_bzero(bzero2, 5 * sizeof(int));
	// printf("------------\nBZERO:\n");
	// printf("OG: ");
	// while (i < 5)
	// 	printf("%d ", bzero1[i++]);
	// printf("\n");
	// printf("ME: ");
	// i = 0;
	// while (i < 5)
	// 	printf("%d ", bzero2[i++]);
	// printf("\n------------\n");
	if (memcmp(bzero1, bzero2, 5 * sizeof(int)) == 0)
		printf("bzero:    OK!\n");
	else
		printf("bzero:    Error\n");

	// * memcpy
	i = 0;
	char	memcpy_src1[] = "salut";
	char	memcpy_dest1[5];
	char	memcpy_dest2[5];
	memcpy(memcpy_dest1, memcpy_src1, 5);
	ft_memcpy(memcpy_dest2, memcpy_src1, 5);
	// printf("------------\nMEMCPY:\n");
	// printf("OG: ");
	// while (i < 5)
	// 	printf("%c ", memcpy_dest1[i++]);
	// printf("\n");
	// printf("ME: ");
	// i = 0;
	// while (i < 5)
	// 	printf("%c ", memcpy_dest2[i++]);
	// printf("\n------------\n");
	if (memcmp(memcpy_dest1, memcpy_dest2, 5) == 0)
		printf("memcpy:   OK!\n");
	else
		printf("memcpy:   Error\n");

	// * memmove
	i = 0;
	char	memmove_src1[] = "salut";
	char	memmove_dest1[5];
	char	memmove_dest2[5];
	memmove(memmove_dest1, memmove_src1, 5);
	ft_memmove(memmove_dest2, memmove_src1, 5);
	// printf("------------\nMEMMOVE:\n");
	// printf("OG: ");
	// while (i < 5)
	// 	printf("%c ", memmove_dest1[i++]);
	// printf("\n");
	// printf("ME: ");
	// i = 0;
	// while (i < 5)
	// 	printf("%c ", memmove_dest2[i++]);
	// printf("\n------------\n");
	if (memcmp(memmove_dest1, memmove_dest2, 5) == 0)
		printf("memmove:  OK!\n");
	else
		printf("memmove:  Error\n");

	// * strlcpy
	char	strlcpy_src1[] = "salut";
	char	strlcpy_dest1[5];
	char	strlcpy_dest2[5];
	size_t	strlcpy_og = strlcpy(strlcpy_dest1, strlcpy_src1, 5);
	size_t	strlcpy_me = ft_strlcpy(strlcpy_dest2, strlcpy_src1, 5);
	// printf("------------\nSTRLCPY:\nOG: %s | %ld\nME: %s | %ld\n", strlcpy_dest1, strlcpy_og, strlcpy_dest2, strlcpy_me);
	// printf("------------\n");
	if (strcmp(strlcpy_dest1, strlcpy_dest2) == 0 && strlcpy_og == strlcpy_me)
		printf("strlcpy:  OK!\n");
	else
		printf("strlcpy:  Error\n");

	// * strlcat
	char	strlcat_src1[6] = "salut";
	char	strlcat_dest1[8] = "cc";
	char	strlcat_dest2[8] = "cc";
	size_t	strlcat_og = strlcat(strlcat_dest1, strlcat_src1, 8);
	size_t	strlcat_me = ft_strlcat(strlcat_dest2, strlcat_src1, 8);
	// printf("------------\nSTRLCAT:\nOG: %s | %ld\nME: %s | %ld\n", strlcat_dest1, strlcat_og, strlcat_dest2, strlcat_me);
	// printf("------------\n");
	if (strcmp(strlcat_dest1, strlcat_dest2) == 0 && strlcat_og == strlcat_me)
		printf("strlcat:  OK!\n");
	else
		printf("strlcat:  Error\n");

	// * toupper
	count = 0;
	char	toupper1 = 'a';
	char	toupper2 = 'Z';
	char	toupper3 = '8';
	if (toupper(toupper1) == ft_toupper(toupper1))
		count++;
	if (toupper(toupper2) == ft_toupper(toupper2))
		count++;
	if (toupper(toupper3) == ft_toupper(toupper3))
		count++;
	if (count == 3)
		printf("toupper:  OK!\n");
	else
		printf("toupper:  Error:%d/3\n", count);

	// * tolower
	count = 0;
	char	tolower1 = 'a';
	char	tolower2 = 'Z';
	char	tolower3 = '8';
	if (tolower(tolower1) == ft_tolower(tolower1))
		count++;
	if (tolower(tolower2) == ft_tolower(tolower2))
		count++;
	if (tolower(tolower3) == ft_tolower(tolower3))
		count++;
	if (count == 3)
		printf("tolower:  OK!\n");
	else
		printf("tolower:  Error:%d/3\n", count);

	// * strchr
	char	strchr_str1[] = "salut toi";
	char	strchr_char1 = 't';
	char	*strchr_og = strchr(strchr_str1, strchr_char1);
	char	*strchr_me = ft_strchr(strchr_str1, strchr_char1);
	// printf("------------\nSTRCHR:\nOG: %s\nME: %s\n", strchr_og, strchr_me);
	// printf("------------\n");
	if (strcmp(strchr_og, strchr_me) == 0)
		printf("strchr:   OK!\n");
	else
		printf("strchr:   Error\n");

	// * strrchr
	char	strrchr_str1[] = "salut toi";
	char	strrchr_char1 = 't';
	char	*strrchr_og = strrchr(strrchr_str1, strrchr_char1);
	char	*strrchr_me = ft_strrchr(strrchr_str1, strrchr_char1);
	// printf("------------\nSTRRCHR:\nOG: %s\nME: %s\n", strrchr_og, strrchr_me);
	// printf("------------\n");
	if (strcmp(strrchr_og, strrchr_me) == 0)
		printf("strrchr:  OK!\n");
	else
		printf("strrchr:  Error\n");

	// * strncmp
	char	strncmp1[] = "salut moi";
	char	strncmp2[] = "salut moi";
	size_t	strncmp_size = 9;
	size_t	strncmp_og = strncmp(strncmp1, strncmp2, strncmp_size);
	size_t	strncmp_me = ft_strncmp(strncmp1, strncmp2, strncmp_size);
	// printf("------------\nSTRNCMP:\nOG: %ld\nME: %ld\n", strncmp_og, strncmp_me);
	// printf("------------\n");
	if (strncmp_og == strncmp_me)
		printf("strncmp:  OK!\n");
	else
		printf("strncmp:  Error\n");

	// * memchr
	char	memchr_str1[] = "salut toi";
	char	memchr_char1 = 't';
	size_t	memchr_size = 10;
	char	*memchr_og = memchr(memchr_str1, memchr_char1, memchr_size);
	char	*memchr_me = ft_memchr(memchr_str1, memchr_char1, memchr_size);
	// printf("------------\nMEMCHR:\nOG: %s\nME: %s\n", memchr_og, memchr_me);
	// printf("------------\n");
	if (ft_memcmp(memchr_og, memchr_me, memchr_size) == 0)
		printf("memchr:   OK!\n");
	else
		printf("memchr:   Error\n");

	// * memcmp
	int		memcmp1[] = {9, 61, 64, 51, 64};
	int		memcmp2[] = {9, 61, 6, 51, 64};
	size_t	memcmp_size = 5 * sizeof(int);
	int		memcmp_og = memcmp(memcmp1, memcmp2, memcmp_size);
	int		memcmp_me = ft_memcmp(memcmp1, memcmp2, memcmp_size);
	// printf("------------\nMEMCMP:\nOG: %d\nME: %d\n", memcmp_og, memcmp_me);
	// printf("------------\n");
	if (memcmp_og == memcmp_me)
		printf("memcmp:   OK!\n");
	else
		printf("memcmp:   Error\n");

	// * strnstr
	char	strnstr_big1[] = "salut salut comment ca va ajd";
	char	strnstr_small1[] = "comment";
	size_t	strnstr_len = 29;
	char	*strnstr_og = strnstr(strnstr_big1, strnstr_small1, strnstr_len);
	char	*strnstr_me = ft_strnstr(strnstr_big1, strnstr_small1, strnstr_len);
	// printf("------------\nSTRNSTR:\nOG: %s\nME: %s\n", strnstr_og, strnstr_me);
	// printf("------------\n");
	if (strcmp(strnstr_og, strnstr_me) == 0)
		printf("strnstr:  OK!\n");
	else
		printf("strnstr:  Error\n");

	// * atoi
	char	atoi1[] = "  \t \n -2147483648";
	if (atoi(atoi1) == ft_atoi(atoi1))
		printf("atoi:     OK!\n");
	else
		printf("atoi:     Error\n");

	// * calloc
	i = 0;
	char	*calloc_og = calloc(5, sizeof(char));
	char	*calloc_me = ft_calloc(5, sizeof(char));
	// printf("------------\nCALLOC:\n");
	// printf("OG: ");
	// while (i < 5)
	// 	printf("%d ", calloc_og[i++]);
	// printf("\n");
	// printf("ME: ");
	// i = 0;
	// while (i < 5)
	// 	printf("%d ", calloc_me[i++]);
	// printf("\n------------\n");
	if (memcmp(calloc_og, calloc_me, 5) == 0)
		printf("calloc:   OK!\n");
	else
		printf("calloc:   Error\n");

	// * strdup
	char	strdup1[] = "salut";
	char	*strdup_og = strdup(strdup1);
	char	*strdup_me = ft_strdup(strdup1);
	// printf("------------\nSTRDUP:\nOG: %s\nME: %s\n", strdup_og, strdup_me);
	// printf("------------\n");
	if (strcmp(strdup_og, strdup_me) == 0)
		printf("strdup:   OK!\n");
	else
		printf("strdup:  Error\n");

	// * substr
	char			*substr_str = ft_strdup("0123456789");
	unsigned int	substr_start = 9;
	size_t			substr_len = 10;
	char			*substr = ft_substr(substr_str, substr_start, substr_len);
	printf("------------\n");
	printf("SUBSTR: %s\n", substr);
	printf("------------\n");
	free(substr);

	// * strjoin
	char	join1[] = "salut";
	char	join2[] = "nonon";
	char	*join = ft_strjoin(join1, join2);
	strlcat(join1, join2, strlen(join1) + strlen(join2) + 1);
	// printf("------------\nSTRDUP:\nCAT:  %s\nJOIN: %s\n", join1, join);
	// printf("------------\n");
	if(strcmp(join1, join) == 0)
		printf("strjoin:  OK!\n");
	else
		printf("strjoin:  Error\n");

	// * ft_strtrim
	char	trim[] = "xxbsalutzz";
	char	set[] = "zxb";
	char	trim_result[] = "salut";
	char	*strtrim = ft_strtrim(trim, set);
	// printf("------------\nSTRTRIM: %s\n", strtrim);
	// printf("------------\n");
	if (strcmp(strtrim, trim_result) == 0)
		printf("strtrim:  OK!\n");
	else
		printf("strtrim:  Error\n");

	// * split
	i = 0;
	count = 0;
	char	split_str[] = "salut comment tu vas";
	int		sep = ' ';
	int		words = count_words(split_str, sep);
	char	*split_result[4] = {"salut", "comment", "tu", "vas"};
	char	**split = ft_split(split_str, sep);
	while (i < words)
	{
		if (strcmp(split[i], split_result[i]) == 0)
			count++;
		// printf("%d: %s\n", i, split[i]);
		i++;
	}
	// printf("%d: %s\n", i, split[i]);
	if (count == words)
		printf("split:    OK!\n");
	else
		printf("split:    Error\n");
	free_tab(split, words);

	// * ft_itoa
	int		itoa_nbr = -2147483648;
	char	itoa_result[] = "-2147483648";
	char	*itoa = ft_itoa(itoa_nbr);
	// printf("------------\nITOA: %s\n", itoa);
	// printf("------------\n");
	if (strcmp(itoa, itoa_result) == 0)
		printf("itoa:     OK!\n");
	else
		printf("itoa:     Error\n");

	// * ft_strmapi
	char	map[] = "abcd";
	char	map_result[] = "cdef";
	char	*strmapi = ft_strmapi(map, &rot_2);
	// printf("------------\nSTRMAPI: %s\n", strmapi);
	// printf("------------\n");
	if (strcmp(strmapi, map_result) == 0)
		printf("strmapi:  OK!\n");
	else
		printf("strmapi:  Error\n");

	// * ft_striteri
	char	striteri[] = "abcd";
	char	iteri_result[] = "defg";
	ft_striteri(striteri, &rot_3);
	// printf("------------\nSTRITERI: %s\n", striteri);
	// printf("------------\n");
	if (strcmp(striteri, iteri_result) == 0)
		printf("striteri: OK!\n");
	else
		printf("striteri: Error\n");

	// * ft_putchar_fd
	// ft_putchar_fd('c', 1);
	// ft_putchar_fd('\n', 1);

	// * ft_putstr_fd
	// ft_putstr_fd("salut\n", 1);

	// * ft_putendl_fd
	// ft_putendl_fd("salut", 1);

	// * ft_putnbr_fd
	// ft_putnbr_fd(-2147483648, 1);
	// ft_putchar_fd('\n', 1);
}
