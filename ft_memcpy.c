/*#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    return (ft_memmove(dest, src, n));
}
*/
#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t index;
    index = 0;
    if (!dest && !src)
        return (0);
    while(index < n)
    {
        *(unsigned char *)(dest + index) = *(unsigned char *)(src + index);
        index ++;
    }
    return (dest);
}
#include <string.h>
#include <stdio.h>
int main()
{
    char dest[] ="zozgetoptas";
    char *resultft = ft_memcpy(dest+2,dest ,5);
    char *resultorig = memcpy(dest+2,dest,5);
    printf("%s\n",resultft);
    printf("%s",resultorig);
    return (0);
}