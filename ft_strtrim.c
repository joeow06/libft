/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:32:53 by jow               #+#    #+#             */
/*   Updated: 2024/06/14 17:28:32 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*str;

	str = 0;
	first = 0;
	last = ft_strlen(s1);
	if (s1 != 0 && set != 0)
	{
		while (s1[first] && ft_strchr(set, s1[first]))
			first++;
		while (ft_strchr(set, s1[last - 1]) && s1[last - 1] && last > first)
			last--;
		str = (char *)malloc(sizeof(char) * (last - first + 1));
		if (str)
			ft_strlcpy(str, &s1[first], last - first + 1);
	}
	return (str);
}
