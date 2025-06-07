/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:16:21 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/02 16:18:27 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
    printf("%d\n",ft_isprint('K'));
    printf("%d\n",ft_isprint('\t'));
    printf("%d\n",ft_isprint(' '));
    printf("%d\n",ft_isprint(0));
    printf("%d\n",ft_isprint(150));
    printf("%d\n",ft_isprint(-8));
    printf("%d\n",ft_isprint(50));
    return (0);
}*/