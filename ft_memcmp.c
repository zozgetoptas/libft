/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:42:55 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/04 16:24:27 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    size_t	i;

	i = 0;

    while (i < n)
    {
        if (p1[i] != p2[i])
            return (p1[i] - p2[i]);
        i++;
    }

    return (0);
}
/*
#include <stdio.h>
int main()
{
	int str[] = {12,56,3,9};
	int str2[] = {12,56,3,7};
	int result = ft_memcmp (str,str2,sizeof(int) * 3);
	printf("%d",result);
}
*/

/*
#include <stdio.h>

int main()
{
    char str1[] = "ozge";
    char str2[] = "ozget";
    int result = ft_memcmp(str1,str2,5);
    printf("%d",result);
    return (0);
}*/