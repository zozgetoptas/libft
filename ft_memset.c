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
