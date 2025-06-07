#include "libft.h"

int ft_atoi(const char *str)
{
    int sign = 1;
    int res = 0;
    int  i = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (sign * res);
}
/*
#include <stdio.h>

int main()
{
    char *str = "-0123";
    printf("%d\n",ft_atoi(str));
    printf("Test 4: '%s' -> %d\n", "   +-42", ft_atoi("   +-42")); // beklenmeyen davranış
    printf("Test 5: '%s' -> %d\n", "4193 with words", ft_atoi("4193 with words"));
    printf("Test 6: '%s' -> %d\n", "words and 987", ft_atoi("words and 987")); // 0 dönmeli
    printf("Test 7: '%s' -> %d\n", "-91283472332", ft_atoi("-91283472332"));
    return (0);
}*/