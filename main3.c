#include "libft.h"
#include <stdio.h>
int main()
{
    int arr[3] = {741,45,12};
    ft_bzero(arr,2);
    int i = 0;
    while (i < 3)
    {
        printf("%d ",arr[i]);
        i++;
    }
}