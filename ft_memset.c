/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:24:23 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/04 12:47:31 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*dest, int ch, size_t	count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)(dest + i) = (unsigned char)ch;
		i++;
	}
	return (dest);
}


#include <stdio.h>
/*
int main()
{
	char dest[] = "zozgetoptas";
	char *result = ft_memset(dest,'a',3);
	printf("%s",result);
	return (0);
}*/
/*
int main()
{
	int x[1];
	void *addr = &x;

	ft_memset(x, 28, 2);
	ft_memset(x, 32, 1);
	// ft_memset(addr, 32 , 1);
	// ft_memset(addr +1, 28, 1);
	// ft_memset(addr + 2, 0, 1);
	// ft_memset(addr + 3, 0, 1);
	
	
	printf("%d" , *x);
}
*/