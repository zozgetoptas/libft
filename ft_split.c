/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:05:59 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/04 15:58:50 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char	*s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **s, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static int	split_words(char **split, const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			split[j] = ft_substr(s, start, i - start);
			if (!split[j])
				return (j);  // başarısızlıkta kaç tane alındı döner
			j++;
			start = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (-1); // başarı durumu
}
char	**ft_split(char const *s, char c)
{
	char	**split;
	int		ret;

	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	ret = split_words(split, s, c);
	if (ret >= 0)  // hata varsa
	{
		free_split(split, ret);
		return (NULL);
	}
	return (split);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("hello world this is a test", ' ');
	i = 0;
	while (res && res[i])
	{
		printf("[%s]\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);

	res = ft_split("", ' ');
	i = 0;
	while (res && res[i])
	{
		printf("[%s]\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);

	res = ft_split("   ", ' ');
	i = 0;
	while (res && res[i])
	{
		printf("[%s]\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);

	res = ft_split(",,a,b,,c,", ',');
	i = 0;
	while (res && res[i])
	{
		printf("[%s]\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);

	res = ft_split(NULL, ',');
	if (!res)
		printf("NULL\n");

	return (0);
}
*/