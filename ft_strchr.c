/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:43:28 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/02 16:20:55 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr (const char *str, int ch)
{
    while (*str && (char)ch != *str)
    {
        str ++;
    }
    if ((char)ch == *str)
    {
        return ((char *)str);
    }
    return (NULL);
}
/*
#include <stdio.h>

int main()
{
    char str[] = "zeynepozge";
    printf("%s\n",ft_strchr(str,'e'));
    char *result = ft_strchr(str,'a');
    if (!result)
    {
        printf("null");
    }

    return (0);
}*/