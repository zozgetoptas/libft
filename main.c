/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:01:39 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/10 18:01:39 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
int	main(void)
{
	t_list *head = NULL;
    int *a=malloc(sizeof(int) +1);
    *a=42;

	t_list *n1 = ft_lstnew("z");
	t_list *n2 = ft_lstnew("toptas");
	t_list *n3 = ft_lstnew(a);

	ft_lstadd_front(&head, n3);
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n1);


	t_list *temp = head;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	printf("Liste uzunluğu: %d\n", ft_lstsize(head));

	t_list *last = ft_lstlast(head);
	printf("Listenin sonu: %s\n", (char *)last->content);

	t_list *n4 = ft_lstnew("asd");
	ft_lstadd_back(&head, n4);
	temp = head;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
    printf("Liste uzunluğu: %d\n", ft_lstsize(head));

	last = ft_lstlast(head);
	printf("Listenin sonu: %s\n", (char *)last->content);

	return (0);
}*/
struct a
{
    char c;
    int d;
};
struct b
{
    int d;
    char c;
};
int main()
{
    struct a s1;
    struct b s2;
    printf("%zu\n",sizeof(struct a));
    printf("%zu\n",sizeof(struct b));
    printf("%p\n",(void *)&s1.c);
    printf("%p\n",(void *)&s1.d);
    printf("%p\n",(void *)&s2.c);
    printf("%p\n",(void *)&s2.d);
    return (0);
}