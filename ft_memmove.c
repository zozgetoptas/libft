#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
	{
		i = len;  // i'yi len ile başlatıyoruz
		while (i > 0)
		{
			i--;          // önce 1 azalt
			d[i] = s[i];  // sonra o byte'ı kopyala
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
    char str1[] = "HelloWorld";
    
    printf("Orijinal str1: %s\n", str1);
    
    // Bellekte örtüşme var: str1'in başına 5 karakter kopyala (Hello -> World)
    // dst = str1, src = str1 + 5, len = 5
    ft_memmove(str1, str1 + 5, 5);
    
    printf("ft_memmove sonra: %s\n", str1);
	return (0);
}*/