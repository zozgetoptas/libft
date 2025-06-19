#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "      -78";
    int result = ft_atoi(str);
    printf("%d",result);
}