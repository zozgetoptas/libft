/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:05:54 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/02 13:06:19 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
/*
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	char c = 'a';
	ft_putchar_fd(c,fd);
	printf("Açılan fd: %d\n", fd);
	close(fd);
	return (0);
}*/
/*

#include <unistd.h>

int main(void)
{
	perror(2,"a",1);
	
    close(0); // stdin'i kapat
    int res = write(0, "X", 1);
    if (res == -1)
        perror("write failed");
}*/