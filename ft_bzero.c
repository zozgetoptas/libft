/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:29:34 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/02 10:39:49 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "ozge";
	printf("%s\n",str);
	ft_bzero(str + 2,2);
	printf("%s\n",str);
	return (0);
}*/