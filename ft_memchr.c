/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:42:37 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/04 16:15:43 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s;
    unsigned char ch = (unsigned char)c;
    size_t i;
	
    i = 0;

    while (i < n)
    {
        if (ptr[i] == ch)
            return (void *)(ptr + i);
        i++;
    }
    return (NULL);
}
/*
#include <stdio.h>
int main()
{
	int s[] = {3, 8, 45};
	int *result = ft_memchr(s,75,3);
	int i = 0;
	while(i < 3)
	{
		printf("%d",result[i]);
		i++;
	}
	return (0);
}
*/








/*
#include <stdio.h>

int main()
{
    char *str = "zeynep ozge";
    printf("%s",ft_memchr(str,'y',5));
    return (0);

}
*/
/*
#include <stdio.h>
#include <string.h>  // Sadece karşılaştırma için kullanabiliriz
#include "libft.h"   // ft_memchr burada olacak

int main()
{
    // 1. Test: char dizisi içinde arama
    char test[] = {1, 2, 3, 4, 5, 6};
    void *res = ft_memchr(test, 4, 6);
    if (res != NULL)
        printf("Bulundu: %d\n", *(unsigned char *)res);
    else
        printf("Bulunamadi\n");

    // 2. Test: int dizisi içinde arama (byte bazlı)
    int arr[] = {12, 54, 25};
    // sizeof(arr) = 3 * sizeof(int), yani 12 byte varsayalım (int 4 byte ise)
    // c=12 burada 0x0C byte olarak aranacak, int dizisinde tam anlamıyla karşılık bulmayabilir
    res = ft_memchr(arr, 12, sizeof(arr));
    if (res != NULL)
        printf("Bulundu: %d\n", *(unsigned char *)res);
    else
        printf("Bulunamadi\n");

    return 0;
}
*/