/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:25:13 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 10:50:28 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if ((unsigned char)c == *str)
			return ((char *)(str));
		str++;
	}
	if (c == '\0')
		return ((char *)(str));
	return (NULL);
}
/*
 use str instead of str[i] to allow pointer 
 arithmetic. Cast (char*) to str cuz str holds
 the address of keyword found. Dont need *str since
 it will dereference it and show the value instead
 of the memory address.
*/
/*
int	main(void)
{
	char	str[] = "Hello world";
	char	*world = ft_strchr(str, 'w');
	printf("Result: %s\n", world);
	return (0);
}
*/