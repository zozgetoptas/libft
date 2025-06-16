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

void    f(void *content)
{
	printf("%s\n",(char *)content);
}
int main()
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("ozge");
	t_list *node2 = ft_lstnew("toptas");
	ft_lstadd_back(&head,node1);
	ft_lstadd_back(&head,node2);
	ft_lstiter(node1,f);
	return (0);

}

/*
int main()
{
	t_list *head = NULL;
	t_list *node1;
	t_list *node2;
	node1 = ft_lstnew(strdup("z"));
	node2 = ft_lstnew(strdup("ozge"));
	ft_lstadd_back(&head,node1);
	ft_lstadd_back(&head,node2);
	t_list *temp = head;
	while(temp)
	{
		printf("%s ",(char *)temp->content);
        temp = temp->next;
    }
	ft_lstdelone(node2,del);
	node1->next = NULL;

	temp = head;
	while(temp)
	{
		printf("%s ",(char *)temp->content);
        temp = temp->next;
    }
	ft_lstclear(&head,del);
	node2->next = NULL;
	temp = head;
	while(temp)
	{
		printf("%s ",(char *)temp->content);
        temp = temp->next;
    }
	return (0);
}
*/

/*
int main()
{
	t_list *head = NULL;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew("z");
	node2 = ft_lstnew("ozge");
	ft_lstadd_front(&head,node2);
	ft_lstadd_front(&head,node1);

	t_list *temp = head;

	while(temp)
	{
		printf("%s  ",(char *)temp->content);
		temp = temp->next;
	}
	printf("\nson dugum: %s", (char *)ft_lstlast(head)->content);
	printf("\nkac dugum var? : %d\n", ft_lstsize(head));

	node3 = ft_lstnew("toptas");
	ft_lstadd_back(&head,node3);

	temp = head;

	while(temp)
	{
		printf("%s  ",(char *)temp->content);
		temp = temp->next;
	}
	printf("\nson dugum: %s", (char *)ft_lstlast(head)->content);
	printf("\nkac dugum var? : %d", ft_lstsize(head));

	printf("\n%s", (char *)ft_lstlast(head)->content);
	ft_lstadd_back(&head,node1);
	printf("%s", (char *)head->next->next->next->next->next->content);

	return (0);
}
*/