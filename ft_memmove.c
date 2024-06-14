/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:48:26 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 10:32:07 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;
	unsigned char	temp[n];

	i = 0;
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (i < n)
	{
		temp[i] = ptr2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr1[i] = temp[i];
		i++;
	}
	return (str1);
}
/*
int	main(void)
{
	char	src[100] = "Geeksfor";
	char	*first;
	char	*sec;

	first = src;
	sec = src;
	printf("Original: %s\n", src);
	ft_memmove(first+5, first, strlen(first) + 1);
	printf("ft_memmove: %s\n", src);
	printf("Memmove: %s\n", (char *)memmove(sec+5, sec, strlen(sec) + 1));
	return (0);
}*/
