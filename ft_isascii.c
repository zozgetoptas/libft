int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
    printf("%d\n",ft_isascii('c'));
    printf("%d\n",ft_isascii('8'));
    printf("%d\n",ft_isascii(7));
    printf("%d\n",ft_isascii(97));
    printf("%d\n",ft_isascii('*'));
    printf("%d\n", ft_isascii(128)); 
    printf("%d\n", ft_isascii(-1));
}*/