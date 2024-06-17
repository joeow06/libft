/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:15:29 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 12:33:56 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>*/
#include "libft.h"

size_t	ft_strlen(const char *str);
/*{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res_d;
	unsigned int	res_s;

	i = ft_strlen(dest);
	j = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
/*
int main(void)
{
    char    dest[50] = "hello";
    char    src[50] = " world";
    unsigned int    size;

    size = 2;
    printf("%lu\n", strlcat(dest, src, size));
    printf("%d\n", ft_strlcat(dest, src, size));
    printf("dest: %s\nsrc: %s\n", dest, src);
}
*/