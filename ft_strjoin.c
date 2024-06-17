/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:52:32 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 15:42:57 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		total_len;
	size_t	i;
	size_t	j;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	string = (char *)malloc((sizeof(char) * (total_len + 1)));
	if (!string)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		string[i++] = s1[j++];
	j = 0;
	while (s2[j])
		string[i++] = s2[j++];
	string[i] = '\0';
		return (string);
}
