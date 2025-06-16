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


void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst && del)
    {
        del (lst->content);
        free (lst);
    }
}
