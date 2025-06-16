/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:35:56 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/10 10:35:56 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;

    if(lst && *lst && del)
    {
        while (*lst)
        {
            temp = (*lst)->next;
            del((*lst)->content);
            free(*lst);
            *lst = temp;
        }
        *lst = NULL;
    }
}