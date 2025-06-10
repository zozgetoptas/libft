/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:15:14 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/10 18:15:14 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *content)
{
    free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst && del)
    {
        del (lst->content);
        free (lst);
    }
}
#include <stdio.h>
int main()
{
    t_list  **lst;
    t_list *node1 = ft_lstnew("zozge");
    t_list *node2 = ft_lstnew("toptas");
    t_list *node3 = ft_lstnew("yesil");
    ft_lstadd_back(lst,node1);
    ft_lstadd_back(lst,node2);
    ft_lstadd_back(lst,node3);
    t_list  *temp = lst;
    while(lst)
    {
        printf("%s ",temp.content);
        temp = temp.next;
    }
    
}