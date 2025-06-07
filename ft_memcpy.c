#include "libft.h"

void *  ft_memcpy(void *dest, const void *src, size_t n)
{
    return (ft_memmove(dest, src, n));
}
/*
#include <stdio.h>

int main()
{
    char src[] = "ozge";
    char dest[4];
    char *result = ft_memcpy(dest,src,4);
    dest[3]='\0';
    printf("%s",result);
    return (0);
}
*/






/*
#include <stdio.h>

int main()
{
    char src[] = "ozge";
    char dest[10];

    ft_memcpy(dest,src,3);
    printf("%s",dest);
    return (0);
}*/