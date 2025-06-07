/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:12:37 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/03 19:30:12 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
}/*
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
