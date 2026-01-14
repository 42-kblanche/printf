/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:53:05 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/05 19:54:27 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define OK printf("%s[OK]%s", GREEN, NEUTRAL)
#define NOK printf("%s[KO]%s", BG_RED, NEUTRAL)
#define TEST(FUNC) printf("TESTING %s%s%s\n", CYAN, FUNC, NEUTRAL);
#define TESTEND printf("\nEND TEST\n");
#define CMP(A,B) if(A == B) OK; else NOK;
#define NEQ(A,B) if(A!=B) OK; else NOK;
#define BCHK(A) if(A) OK; else NOK;

#include "libft.h"
#include "lipsum.h"
#include "pcolors.h"

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void test(int signal)
{
	(void)signal;
	printf("test");
}

void test_atoi()
{
	TEST("ft_atoi")
	CMP(ft_atoi("42"),42)
	CMP(ft_atoi("test"),0)
	CMP(ft_atoi("-2147483648"),-2147483648)
	CMP(ft_atoi("--42"),0)
	TESTEND
}

void test_bzero()
{
	char	*s;
	size_t	i;
	const size_t	size = 150;

	s = malloc(size);
	i = 0;
	while (i < size)
	{
		s[i] = '1';
		++i;
	}
	TEST("ft_bzero")
	ft_bzero(s, 0);
	CMP(s[0],'1')
	CMP(s[1],'1')
	ft_bzero(s, 50);
	CMP(s[0],0)
	CMP(s[1],0)
	CMP(s[49],0)
	CMP(s[50],'1')
	TESTEND
}

void	test_calloc()
{
	unsigned char	*s;
	const size_t	size = 4;

	TEST("ft_calloc")
	s = calloc(0, 0);
	NEQ(s, 0)
	free(s);
	s = calloc(size, 0);
	NEQ(s, 0)
	free(s);
	s = calloc(size, 1);
	NEQ(s, 0)
	CMP(s[0], 0)
	free(s);
	s = calloc(size, UINT_MAX);
	CMP(s,0)
	TESTEND
}

void test_isalnum()
{
	TEST("ft_isalnum")
	BCHK(ft_isalnum('0'))
	BCHK(ft_isalnum('9'))
	BCHK(ft_isalnum('a'))
	BCHK(ft_isalnum('A'))
	BCHK(ft_isalnum('z'))
	BCHK(ft_isalnum('Z'))
	BCHK(!ft_isalnum('-'))
	BCHK(!ft_isalnum('\0'))
	TESTEND
}

void test_isalpha()
{
	TEST("ft_isalpha")
	BCHK(ft_isalpha('a'))
	BCHK(ft_isalpha('A'))
	BCHK(ft_isalpha('z'))
	BCHK(ft_isalpha('Z'))
	BCHK(!ft_isalpha('0'))
	BCHK(!ft_isalpha('\0'))
	TESTEND
}

void test_isascii()
{
	TEST("ft_isascii")
	BCHK(ft_isascii('a'))
	BCHK(ft_isascii('0'))
	BCHK(ft_isascii('\n'))
	BCHK(!ft_isascii(u'é'))
	BCHK(ft_isascii('\0'))
	TESTEND
}

void test_isdigit()
{
	TEST("ft_isdigit")
	BCHK(ft_isdigit('0'))
	BCHK(ft_isdigit('9'))
	BCHK(!ft_isdigit('a'))
	BCHK(!ft_isdigit('\0'))
	TESTEND
}

void test_isprint()
{
	TEST("ft_isprint")
	BCHK(ft_isprint('0'))
	BCHK(ft_isprint('a'))
	BCHK(ft_isprint(' '))
	BCHK(!ft_isprint('\n'))
	BCHK(!ft_isprint('\0'))
	TESTEND
}

void test_isspace()
{
	TEST("ft_isspace")
	BCHK(ft_isspace('\n'))
	BCHK(ft_isspace('\v'))
	BCHK(ft_isspace('\t'))
	BCHK(ft_isspace('\r'))
	BCHK(ft_isspace(' '))
	BCHK(!ft_isspace('0'))
	BCHK(!ft_isspace('\0'))
	TESTEND
}

void test_strlen()
{
	TEST("ft_strlen")
	CMP(ft_strlen(""),0)
	CMP(ft_strlen("test"),4)
	CMP(ft_strlen(LIPSUM2048),2048)
	TESTEND
}

int	main(void)
{
	test_atoi();
	test_bzero();
	test_calloc();
	test_isalnum();
	test_isalpha();
	test_isascii();
	test_isdigit();
	test_isprint();
	test_isspace();
	test_strlen();
	return (0);
}
