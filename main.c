/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:02:33 by agruet            #+#    #+#             */
/*   Updated: 2024/11/14 15:11:46 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <ctype.h>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int	count = 0;

	// * isalpha
	char	isalpha1 = 'A';
	char	isalpha2 = 'z';
	char	isalpha3 = '8';
	if (isalpha(isalpha1) == ft_isalpha(isalpha1))
		count++;
	if (isalpha(isalpha2) == ft_isalpha(isalpha2))
		count++;
	if (isalpha(isalpha3) == ft_isalpha(isalpha3))
		count++;
	if (count == 3)
		printf("isalpha: OK!\n");
	else
		printf("isalpha: Error:%d/3\n", count);

	// * isdigit
	count = 0;
	char	isdigit1 = '0';
	char	isdigit2 = 'z';
	if (isdigit(isdigit1) == ft_isdigit(isdigit1))
		count++;
	if (isdigit(isdigit2) == ft_isdigit(isdigit2))
		count++;
	if (count == 2)
		printf("isdigit: OK!\n");
	else
		printf("isdigit: Error%d/2\n", count);

	// * isalnum
	count = 0;
	char	isalnum1 = '0';
	char	isalnum2 = 'z';
	char	isalnum3 = ';';
	if (isalnum(isalnum1) == ft_isalnum(isalnum1))
		count++;
	if (isalnum(isalnum2) == ft_isalnum(isalnum2))
		count++;
	if (isalnum(isalnum3) == ft_isalnum(isalnum3))
		count++;
	if (count == 3)
		printf("isalnum: OK!\n");
	else
		printf("isalnum: Error%d/3\n", count);

	// * isascii
	count = 0;
	int	isascii1 = 97;
	int	isascii2 = 128;
	if (isascii(isascii1) == ft_isascii(isascii1))
		count++;
	if (isascii(isascii2) == ft_isascii(isascii2))
		count++;
	if (count == 2)
		printf("isascii: OK!\n");
	else
		printf("isascii: Error%d/2\n", count);

	// * isprint
	count = 0;
	int	isprint1 = 10;
	int	isprint2 = 117;
	if (isprint(isprint1) == ft_isprint(isprint1))
		count++;
	if (isprint(isprint2) == ft_isprint(isprint2))
		count++;
	if (count == 2)
		printf("isprint: OK!\n");
	else
		printf("isprint: Error%d/2\n", count);

	// * strlen
	count = 0;
	char	*strlen1 = "";
	char	*strlen2 = "salut";
	if (strlen(strlen1) == ft_strlen(strlen1))
		count++;
	if (strlen(strlen2) == ft_strlen(strlen2))
		count++;
	if (count == 2)
		printf("strlen:  OK!\n");
	else
		printf("strlen:  Error%d/2\n", count);

	// * memset
	char	memset1[] = "salut";
	char	*memset2 = memset(memset1, 'x', 5);
	char	*memset3 = ft_memset(memset1, 'x', 5);
	if (memcmp(memset2, memset3, 5) == 0)
		printf("memset:  OK!\n");
	else
		printf("memset:  Error\n");

	// * bzero
	int		bzero1[] = {9, 61, 64, 51, 64};
	int		bzerobuff1[5];
	int		bzerobuff2[5];
	memcpy(bzerobuff1, bzero1, 5 * sizeof(int));
	memcpy(bzerobuff2, bzero1, 5 * sizeof(int));
	bzero(bzerobuff1, 5 * sizeof(int));
	ft_bzero(bzerobuff2, 5 * sizeof(int));
	if (memcmp(bzerobuff1, bzerobuff2, 5 * sizeof(int)) == 0)
		printf("bzero:   OK!\n");
	else
		printf("bzero:   Error\n");

	// * memmove
	char	memmove1[] = "salut";
	char	memmovebuff1[5];
	char	memmovebuff2[5];
	memmove(memmovebuff1, memmove1, 5);
	ft_memmove(memmovebuff2, memmove1, 5);
	if (memcmp(memmovebuff1, memmovebuff2, 5) == 0)
		printf("memmove: OK!\n");
	else
		printf("memmove: Error\n");

	// * strlcpy
	char	strlcpy1[] = "salut";
	char	strlcpy2[5];
	char	strlcpy3[5];
	size_t	strlcpy4 = strlcpy(strlcpy2, strlcpy1, 5);
	size_t	strlcpy5 = ft_strlcpy(strlcpy3, strlcpy1, 5);
	if (strcmp(strlcpy2, strlcpy3) == 0 && strlcpy4 == strlcpy5)
		printf("strlcpy: OK!\n");
	else
		printf("strlcpy: Error\n");

	// * strlcat
	char	strlcat1[10] = "salut";
	char	strlcat2[30] = "no";
	char	strlcat3[30] = "no";
	size_t	strlcat4 = strlcat(strlcat2, strlcat1, 8);
	size_t	strlcat5 = ft_strlcat(strlcat3, strlcat1, 8);
	if (strcmp(strlcat2, strlcat3) == 0 && strlcat4 == strlcat5)
		printf("strlcat: OK!\n");
	else
		printf("strlcat: Error\n");

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
		printf("toupper: OK!\n");
	else
		printf("toupper: Error%d/3\n", count);

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
		printf("tolower: OK!\n");
	else
		printf("tolower: Error%d/3\n", count);

	// * strchr
	char	strchr1[] = "salut toi";
	char	strchr2 = 't';
	char	*strchr3 = strchr(strchr1, strchr2);
	char	*strchr4 = ft_strchr(strchr1, strchr2);
	if (strcmp(strchr3, strchr4) == 0)
		printf("strchr:  OK!\n");
	else
		printf("strchr:  Error\n");

	// * strrchr
	char	strrchr1[] = "salut toi";
	char	strrchr2 = 't';
	char	*strrchr3 = strrchr(strrchr1, strrchr2);
	char	*strrchr4 = ft_strrchr(strrchr1, strrchr2);
	if (strcmp(strrchr3, strrchr4) == 0)
		printf("strrchr: OK!\n");
	else
		printf("strrchr: Error\n");

	// * strncmp
	char	strncmp1[] = "salut toi";
	char	strncmp2[] = "salut moi";
	size_t	strncmp3 = 9;
	size_t	strncmp4 = strncmp(strncmp1, strncmp2, strncmp3);
	size_t	strncmp5 = ft_strncmp(strncmp1, strncmp2, strncmp3);
	if (strncmp4 == strncmp5)
		printf("strncmp: OK!\n");
	else
		printf("strncmp: Error\n");

	// * memchr
	char	memchr1[] = "salut toi";
	char	memchr2 = 't';
	size_t	memchr3 = 10;
	char	*memchr4 = memchr(memchr1, memchr2, memchr3);
	char	*memchr5 = ft_memchr(memchr1, memchr2, memchr3);
	if (memcmp(memchr4, memchr5, memchr3) == 0)
		printf("memchr:  OK!\n");
	else
		printf("memchr:  Error\n");

	// * memcmp
	int		memcmp1[] = {9, 61, 64, 51, 64};
	int		memcmp2[] = {9, 61, 64, 51, 64};
	size_t	memcmp3 = 5 * sizeof(int);
	int	memcmp4 = memcmp(memcmp1, memcmp2, memcmp3);
	int	memcmp5 = ft_memcmp(memcmp1, memcmp2, memcmp3);
	if (memcmp4 == memcmp5)
		printf("memcmp:  OK!\n");
	else
		printf("memcmp:  Error\n");

	// * strnstr
	char	strnstr1[] = "salut salut comment ca va ajd";
	char	strnstr2[] = "salut";
	size_t	strnstr3 = 10;
	char	*strnstr4 = strnstr(strnstr1, strnstr2, strnstr3);
	char	*strnstr5 = ft_strnstr(strnstr1, strnstr2, strnstr3);
	if (strcmp(strnstr4, strnstr5) == 0)
		printf("strnstr: OK!\n");
	else
		printf("strnstr: Error\n");

	// * atoi
	char	atoi1[] = "  \t \n -2147483648";
	if (atoi(atoi1) == ft_atoi(atoi1))
		printf("atoi:    OK!\n");
	else
		printf("atoi:    Error\n");

	// * calloc
	char	*calloc1 = calloc(5, sizeof(char));
	char	*calloc2 = ft_calloc(5, sizeof(char));
	if (memcmp(calloc1, calloc2, 5) == 0)
		printf("calloc:  OK!\n");
	else
		printf("calloc:  Error\n");

	// * strdup
	char	strdup1[] = "salut";
	char	*strdup2 = strdup(strdup1);
	char	*strdup3 = ft_strdup(strdup1);
	if (strcmp(strdup2, strdup3) == 0)
		printf("strdup:  OK!\n");
	else
		printf("strdup:  Error\n");

}
