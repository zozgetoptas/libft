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
    int i;

    i = 0;
    while (str[i] && (char)ch != str[i])
    {
        i++;
    }
    if ((char)ch == *str)
    {
        return ((char *)str);
    }
    return (NULL);
}
