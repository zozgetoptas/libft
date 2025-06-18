#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <fcntl.h>


void *uppercase(void *content)
{
    char *str = (char *)content;
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return ((void *)str);
}
int main()
{
    t_list *first_node;
    t_list *second_node;
    t_list *head; // yoksa dugumun basi neresi anlamiyorum kafami karisitiriyo

    char str1[] = "zozge";
    char str2[] = "toptas";

    char *content1 = ft_strdup(str1);
    char *content2 = ft_strdup(str2);

    first_node = ft_lstnew(content1);
    second_node = ft_lstnew(content2);
    head = first_node;

    ft_lstadd_back(&head,second_node);

    t_list *temp;
    temp = head;
    printf("nodelar:\n");
    while (temp)
    {
        printf("%s\n",(char *)temp->content);
        temp = temp->next;
    }
    printf("\n");
    printf("son dugum:\n");
    printf("%s\n",(char *)ft_lstlast(head)->content);
    printf("\n");
    printf("kac dugum var:\n");
    printf("%d\n",ft_lstsize(head));
    printf("\n");

    head = head->next;
    ft_lstdelone(first_node,&free);
    temp = head;
    printf("nodelar:\n");
    while (temp)
    {
        printf("%s\n",(char *)temp->content);
        temp = temp->next;
    }
    printf("\n");

    t_list *third_node;
    t_list *fourth_node;
    char str3[] = "yey";
    char str4[] = "zxcv";
    char *content3 = ft_strdup(str3);
    char *content4 = ft_strdup(str4);
    third_node = ft_lstnew(content3);
    fourth_node = ft_lstnew(content4);
    ft_lstadd_back(&head,third_node);
    ft_lstadd_back(&head,fourth_node);
    temp = head;
    printf("nodelar:\n");
    while(temp)
    {
        printf("%s\n",(char *)temp->content);
        temp = temp->next;
    }
    printf("\n");
    printf("kac dugum var:\n");
    printf("%d\n",ft_lstsize(head));
    printf("\n");
    printf("son dugum:\n");
    printf("%s\n",(char *)ft_lstlast(head)->content);
    printf("\n");

    t_list *mapped = ft_lstmap(head,&uppercase,&free);
    printf("uppercase:\n");
    temp = mapped;
    while(temp)
    {
        printf("%s\n",(char *)temp->content);
        temp = temp->next;
    }
    printf("\n");
    
    ft_lstclear(&head,&free);
    printf("kac dugum var:\n");
    printf("%d\n",ft_lstsize(head));
    printf("\n");

    return (0);
}