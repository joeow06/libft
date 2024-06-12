/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:47:39 by jow               #+#    #+#             */
/*   Updated: 2024/04/03 15:56:45 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error_handling(char *base, int *error)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*error = 1;
	while (base[i] && *error == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*error = 1;
		}
		if (base[i] < 32 || base[i] > 126 || base[i] == '+' || base[i] == '-')
			*error = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_length;
	int		error;
	long	nb;

	nb = nbr;
	error = 0;
	base_length = 0;
	ft_error_handling(base, &error);
	if (error == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[base_length])
			base_length++;
		if (nb < base_length)
			ft_putchar(base[nb]);
		if (nb >= base_length)
		{
			ft_putnbr_base(nb / base_length, base);
			ft_putnbr_base(nb % base_length, base);
		}
	}
}
/*
int	main(void)
{
	int n = 42;
	char *base = "poneyvif";

	ft_putnbr_base(n, base);
	return (0);
}
*/
