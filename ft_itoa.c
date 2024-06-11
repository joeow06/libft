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
<<<<<<< HEAD
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
=======
int		count_digit(const int n);
char	*ft_itoa(int n);

int	main(void)
{
	int	number = 12345;
	
	char *result = ft_itoa(number);
	printf("result: %s\n", result);
	return (0);
}
>>>>>>> 0247cfb5bb6f1468101660dafa68ab4d3f41c037

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
<<<<<<< HEAD
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
=======
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
>>>>>>> 0247cfb5bb6f1468101660dafa68ab4d3f41c037
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
<<<<<<< HEAD
	back--;
=======
>>>>>>> 0247cfb5bb6f1468101660dafa68ab4d3f41c037
	while (front < back)
	{
		temp = str[front];
		str[front] = str[back];
		str[back] = temp;
		back--;
		front++;
	}
<<<<<<< HEAD
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
=======
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
>>>>>>> 0247cfb5bb6f1468101660dafa68ab4d3f41c037
	printf("digit test: %d\n", digit);
	return (digit);
}
