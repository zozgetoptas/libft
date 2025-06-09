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
