/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:12:10 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/03 14:22:50 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    if (little[0] == '\0')
    {
        return (char *)big;
    }
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
       while (little[j])
        {
            if (i + j >= len || big[i + j] == '\0' || big[i + j] != little[j])
                break;
            j++;
        }
        if (!little[j])
            return (char *)&big[i];
        i++;
    }
    return (NULL);
}
/*
#include <stdio.h>
int main()
{
    char *res;

    res = ft_strnstr("Hello World", "World", 11);
    if (res != NULL)
        printf("Result 1: %s\n", res);
    else
        printf("Result 1: NULL\n");

    res = ft_strnstr("Hello World", "World", 5);
    if (res != NULL)
        printf("Result 2: %s\n", res);
    else
        printf("Result 2: NULL\n");

    res = ft_strnstr("Hello World", "", 11);
    if (res != NULL)
        printf("Result 3: %s\n", res);
    else
        printf("Result 3: NULL\n");

    res = ft_strnstr("Hello World", "lo", 7);
    if (res != NULL)
        printf("Result 4: %s\n", res);
    else
        printf("Result 4: NULL\n");

    res = ft_strnstr("Hello World", "bye", 11);
    if (res != NULL)
        printf("Result 5: %s\n", res);
    else
        printf("Result 5: NULL\n");

    return 0;
}*/