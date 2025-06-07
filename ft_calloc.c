/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:00:34 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/04 13:17:04 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	if (nmemb != 0 && size > ((size_t) -1) / nmemb)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>

int main()
{
	int *ptr = ft_calloc(4,sizeof(char));
	int i = 0;
	while (i < 4)
	{
		printf("%d ",ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}
*/


















/*


#include <stdio.h>

int main()
{
	int *ptr = ft_calloc(3, sizeof(int));
	int i = 0;
	while(i < 3)
	{
		printf("%d",ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/