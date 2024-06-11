/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:41:36 by jow               #+#    #+#             */
/*   Updated: 2024/06/11 16:15:51 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*reverse(char *str);
int		count_digit(const int n);
char	*ft_itoa(int n);

int	main(void)
{
	int	number = 12345;
	
	char *result = ft_itoa(number);
	printf("result: %s\n", result);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		z;
	int		sign;

	i = 0;
	str = (char *)malloc(sizeof(char) * (count_digit(n) + 1));
	printf("n: %d\n", n);
	if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (n < 0)
	{
		sign = -1;	
		n *= -1;
	}
	while (n != 0)
	{
		z = n % 10;
		if (z > 9)
			str[i++] = (z - 10) + 'a';
		else
			str[i++] = z + '0';
		n = n / 10;
	}
	printf("work\n");
	str[i] = '\0';
	printf("work\n");
	reverse(str);
	printf("work\n");
	return (str);
}

char	*reverse(char *str)
{
	int		front;
	int		back;
	char	temp;

	printf("passed string: %s\n", str);
	back = 0;
	front = 0;
	while (str[back])
		back++;
	while (front < back)
	{
		temp = str[front];
		str[front] = str[back];
		str[back] = temp;
		back--;
		front++;
	}
	printf("reverse: %s\n", str);
	return (str);
}

int	count_digit(int n)
{
	int	digit;
	int	temp;

	digit = 1;
	if (n < 0)
	{
		digit++;
		n *= -1;
	}
	temp = n;
	while (temp /= 10)
		digit++;
	printf("digit test: %d\n", digit);
	return (digit);
}
