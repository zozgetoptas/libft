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
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
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
#include <string.h>
#include <stdio.h>
int main()
{
    char dest[] ="zozgetoptas";
    char *resultft = ft_memmove(dest+2,dest ,5);
    char *resultorig = memmove(dest+2,dest,5);
    printf("%s\n",resultft);
    printf("%s",resultorig);
    return (0);
}*/