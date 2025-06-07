/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:51:59 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/03 10:19:35 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	index;

	if (s != NULL)
	{
		index = 0;
		while (s[index])
		{
			ft_putchar_fd(s[index], fd);
			index++;
		}
	}
}/*
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd = open ("dosya1.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);
	char s[] = "zozge";
	ft_putstr_fd(s,fd);
	close(fd);
	return (0);
}*/
/*
int main()
{
	char s[] = "hata!";
	char s1[] = "normal";
	ft_putstr_fd(s,2);
	ft_putstr_fd(s1,1);
	return (0);
}*/