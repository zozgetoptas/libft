/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:10:52 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/02 13:10:59 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin (char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    char    *joined;

    if (!s1 || !s2)
        return (NULL);
    joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!joined)
        return (NULL);
    i = 0;
    while (i < ft_strlen(s1))
    {
        joined[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < ft_strlen(s2))
    {
        joined[i + j] = s2[j];
        j++;
    }
    joined[i + j] = '\0';
    return (joined);
}
/*
#include <stdio.h>

int main(void)
{
    char *result;

    // Test 1: Normal iki string birleştirme
    result = ft_strjoin("Hello", "World");
    printf("Test 1: %s\n", result);
    free(result);

    // Test 2: Boş string + dolu string
    result = ft_strjoin("", "World");
    printf("Test 2: %s\n", result);
    free(result);

    // Test 3: Dolu string + boş string
    result = ft_strjoin("Hello", "");
    printf("Test 3: %s\n", result);
    free(result);

    // Test 4: İki boş string
    result = ft_strjoin("", "");
    printf("Test 4: \"%s\"\n", result);
    free(result);

    // Test 5: Uzun stringler
    result = ft_strjoin("42 İstanbul - ", "libft projesi");
    printf("Test 5: %s\n", result);
    free(result);

    // Test 6: NULL ile test (eğer korumayı kaldırırsan crash olur!)
    // result = ft_strjoin(NULL, "test"); // Bu durumda NULL döner
    // printf("Test 6: %s\n", result); // Yorumda bırakmak mantıklı olur

    return 0;
}*/