/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:08:57 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/03 18:51:35 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
#include <ctype.h>
#include <stdio.h>

int main()
{
    printf("%d\n",isdigit('c'));
    printf("%d\n",isdigit('8'));
    printf("%d\n",isdigit(7));
    printf("%d\n",isdigit(97));
    printf("%d\n",isdigit('*'));
    printf("%d\n",isdigit(128)); 
    printf("%d\n",isdigit(55));
}