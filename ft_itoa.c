/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:37:09 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/04 13:33:32 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n, int sign)
{
	long	count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	if (sign < 0)
		count++;
	return (count);
}
static long	ft_sign(int n, int *sign)
{
	long	n2;

	n2 = n;
	if (n2 < 0)
		*sign = -1;
	else
		*sign = 1;
	n2 *= (*sign);
	return (n2);
}
char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	int	sign;
	long	n2;

	n2 = ft_sign(n, &sign);
	len = ft_len(n2, sign);
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = '0' + (n2 % 10);
		n2 /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
/*
#include <stdio.h>

int main()
{
	int arr[] = {7,34,-78,25436543,2147483647,-21474836480};
	int i = 0;
	while (i < 6)
	{
		char *s = ft_itoa(arr[i]);
		printf("%d. -> %s\n",i+1,s);
		free(s);
		i++;
	}
	return (0);
}*/





















/*
#include <stdio.h>

int main()
{
	int n1 = 38764;

	char *s1 = ft_itoa(n1);
	printf("%s",s1);
	free(s1);
}*/