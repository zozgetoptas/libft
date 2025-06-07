#include "libft.h"

 t_list     *ft_lstnew(void *content)
 {
    t_list  *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if(!new_node)
        return (NULL);
    new_node->content = content;
	new_node->next = NULL;
    return (new_node);
 }
 #include <stdio.h>

 int main(void)
{
    // 1) String veri için:
    char *str = "Merhaba Zeynep!";
    t_list *node1 = ft_lstnew(str);

    // 2) int veri için:
    int num = 2025;
    t_list *node2 = ft_lstnew(&num); // dikkat: adresini verdik!

    // Yazdırma:
    printf("node1->content (string): %s\n", (char *)node1->content);
    printf("node2->content (int): %d\n", *(int *)node2->content);

    return 0;
}
