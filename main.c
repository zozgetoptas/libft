#include "libft.h"
#include <stdio.h>

int main(void)
{
    // ft_strlen testi
    const char *text = "Libft Test!";
    printf("ft_strlen(\"%s\") = %ld\n", text, ft_strlen(text));

    // ft_atoi testi
    const char *num_str = "   \t\n  -42abc";
    printf("ft_atoi(\"%s\") = %d\n", num_str, ft_atoi(num_str));

    // ft_strchr testi
    const char *find_str = "Hello, world!";
    printf("ft_strchr(\"%s\", 'o') = %s\n", find_str, ft_strchr(find_str, 'o'));

    // ft_strdup testi
    char *copy = ft_strdup("42");
    printf("ft_strdup(\"42\") = %s\n", copy);
    free(copy);

    // ft_calloc testi
    int *arr = ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    free(arr);

    return 0;
}
