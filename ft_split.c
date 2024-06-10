/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:27:15 by jow               #+#    #+#             */
/*   Updated: 2024/06/10 16:15:13 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_strlen(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);

int	main(void)
{
	char	*foods = "ha,hi,hu";

	char **result = ft_split(foods, ',');
	int i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("%s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		n;
	int		n_substr;
	char	**array;

	i = 0;
	n_substr = 1;
	while (s[i])
	{
		if (s[i] == c)
		n_substr++;
		i++;
	}
	array = (char **)malloc(sizeof(char *) * (n_substr + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c || s[i+1] == '\0')
		{
			if (s[i] == c)
				array[n] = ft_substr(s, j, i - j);
			else
				array[n] = ft_substr(s, j, i - j + 1);
			n++;
			j = i + 1;
		}
		i++;
	}
	array[n] = NULL;
	return (array);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	while (i < n)
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	return (dest);
}

int	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (NULL);
	if (s_len - start < len)
		sub_len = s_len - start;
	else
		sub_len = len;
	substr = (char *)malloc((sub_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, sub_len);
	substr[sub_len] = '\0';
	return (substr);
}
