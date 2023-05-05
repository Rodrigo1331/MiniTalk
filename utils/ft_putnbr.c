/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/01/26 16:27:46 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long long int	n2;
	int				l;

	l = 0;
	n2 = n;
	if (n2 < 0)
	{
		l++;
		n2 = n2 * (-1);
		write(1, "-", 1);
	}
	if (n2 >= 10)
	{
		l += ft_putnbr(n2 / 10);
		l += ft_putnbr(n2 % 10);
	}
	if (n2 <= 9)
		l += ft_putchar(n2 + '0');
	return (l);
}

int	ft_putnbr_u(unsigned int n)
{
	unsigned int	n2;
	int				l;

	l = 0;
	n2 = n;
	if (n2 >= 10)
	{
		l += ft_putnbr_u(n2 / 10);
		l += ft_putnbr_u(n2 % 10);
	}
	if (n2 <= 9)
		l += ft_putchar(n2 + '0');
	return (l);
}
