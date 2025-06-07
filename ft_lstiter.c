#include "libft.h"
#include <stdio.h>

void    f(void *content)
{
    printf("%s\n",(char *)content);
}

void   ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst && f)
    {
        while (lst)
        {
            f(lst->content);
            lst = lst->next;
        }
    }
}