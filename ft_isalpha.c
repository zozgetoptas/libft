/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:07:20 by ztoptas           #+#    #+#             */
/*   Updated: 2025/06/03 19:07:01 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
#include <ctype.h>
#include <stdio.h>

int main()
{
    printf("%d\n",isalpha('c'));
    printf("%d\n",isalpha('8'));
    printf("%d\n",ft_isalpha(-4));
    printf("%d\n",ft_isalpha(97));
    printf("%d\n",ft_isalpha('*'));
}
