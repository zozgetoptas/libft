/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:44:01 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/02 16:21:28 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while (j < dstsize - 1 && src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
    char dst1[10];
    char dst2[10];
    size_t len;

    // Normal kullanım
    len = ft_strlcpy(dst1, "Hello", sizeof(dst1));
    printf("Test 1:\nCopied: \"%s\", Return: %zu\n", dst1, len);

    // src daha uzun, dst kısa
    len = ft_strlcpy(dst1, "Hello, World!", sizeof(dst1));
    printf("Test 2:\nCopied: \"%s\", Return: %zu\n", dst1, len);

    // dstsize = 0
	ft_memset(dst1,'a',sizeof(dst1));
    len = ft_strlcpy(dst1, "Test", 0);
    printf("Test 3:\nCopied (should not change dst): \"%s\", Return: %zu\n", dst1, len);

    // src boş
    len = ft_strlcpy(dst1, "", sizeof(dst1));
    printf("Test 4:\nCopied: \"%s\", Return: %zu\n", dst1, len);

    // dst boyutu tam src uzunluğundan 1 fazla
    char shortsrc[] = "1234";
    len = ft_strlcpy(dst2, shortsrc, 5);
    printf("Test 5:\nCopied: \"%s\", Return: %zu\n", dst2, len);

    // src NULL karakter içeriyor gibi davranan içerik
    char weirdsrc[] = {'H', 'e', 'l', 'l', 'o', '\0', 'X', 'Y'};
    len = ft_strlcpy(dst2, weirdsrc, sizeof(dst2));
    printf("Test 6:\nCopied: \"%s\", Return: %zu\n", dst2, len);

    return 0;
}*/
/*
#include <stdio.h>

int main()
{
	char dest[] = "zeynep ";
	char src[] = "ozge";
	printf("%ld",ft_strlcpy(dest,src,8));
	printf("%s",dest);
	return (0);
}*/