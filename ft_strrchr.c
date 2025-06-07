/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:44:31 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/02 16:22:20 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int ch)
{
    const char *last = NULL;

    while (*str)
    {
        if (*str == (char)ch)
            last = str;
        str++;
    }
    if ((char)ch == '\0')
        return (char *)str;

    return (char *)last;
}
/*
#include <stdio.h>

int main()
{
    char *str = "aaa";
    char *result = ft_strrchr(str,'a');
    if(result)
    {
        printf("%s\n",result);
    }
    else
        printf("null\n");
    return (0);
}*/
#include <stdio.h>
#include "libft.h"

int main()
{
    const char *s = "hello world";

    char *p = ft_strrchr(s, 'o');
    if (p)
        printf("Found 'o' at position: %ld\n", p - s);
    else
        printf("'o' not found\n");

    char *p2 = ft_strrchr(s, 'z');
    if (p2)
        printf("Found 'z' at position: %ld\n", p2 - s);
    else
        printf("'z' not found\n");

    char *p3 = ft_strrchr(s, '\0');
    if (p3)
        printf("Found '\\0' at position: %ld\n", p3 - s);
    else
        printf("'\\0' not found\n");

    return 0;
}