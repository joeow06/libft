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
int		count_digit(long num);
char	*ft_itoa(int n);
/*
int	main(void)
{
	int	number = -2147483648;
	
	char *result = ft_itoa(number);
	printf("result: %s\n", result);
	free(result);
	return (0);
}*/

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;
	long	num;

	i = 0;
	num = n;
	str = (char *)malloc(sizeof(char) * (count_digit(num) + 1));
	if (!str)
		return (NULL);
	if (num == 0)
		str[i++] = '0';
	if (num < 0)
	{
		sign = 1;
		num *= -1;
	}
	while (num != 0)
	{
		str[i++] = (num % 10) + '0';
		num = num / 10;
	}
	if (sign == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (reverse(str));
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
	back--;
	while (front < back)
	{
		temp = str[front];
		str[front] = str[back];
		str[back] = temp;
		back--;
		front++;
	}
	return (str);
}

int	count_digit(long num)
{
	int	digit;

	digit = 1;
	if (num < 0)
	{
		digit++;
		num *= -1;
	}
	while (num)
	{
		num /= 10;
		digit++;
	}
	printf("digit test: %d\n", digit);
	return (digit);
}
