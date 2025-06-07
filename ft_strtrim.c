#include "libft.h"

char *ft_strtrim (char const *s1, char const *set)
{
    size_t start;
    size_t end;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set,s1[end - 1]))
        end--;
    return (ft_substr(s1, start, end - start));
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *trimmed;

    trimmed = ft_strtrim("   hello world   ", " ");
    printf("Trimmed: \"%s\"\n", trimmed);
    free(trimmed);

    trimmed = ft_strtrim("--example--string--", "-");
    printf("Trimmed: \"%s\"\n", trimmed);
    free(trimmed);

    trimmed = ft_strtrim("xxxytestyyxx", "xy");
    printf("Trimmed: \"%s\"\n", trimmed);
    free(trimmed);

    trimmed = ft_strtrim("no_trim_needed", " ");
    printf("Trimmed: \"%s\"\n", trimmed);
    free(trimmed);

    trimmed = ft_strtrim("", " ");
    printf("Trimmed: \"%s\"\n", trimmed);
    free(trimmed);

    return 0;
}*/