/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:57:56 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/01/26 16:27:48 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_base_uppercase(unsigned int n)
{
	char	*base;
	int		l;

	l = 0;
	base = "0123456789ABCDEF";
	l += ft_putchar(base[n]);
	return (l);
}

int	ft_puthex_base(unsigned int n)
{
	char	*base;
	int		l;

	l = 0;
	base = "0123456789abcdef";
	l += ft_putchar(base[n]);
	return (l);
}

int	ft_hex_base_uppercase(unsigned int n)
{
	long long int	n2;
	int				l;

	l = 0;
	n2 = n;
	if (n2 >= 16)
	{
		l += ft_hex_base_uppercase(n2 / 16);
		l += ft_hex_base_uppercase(n2 % 16);
	}
	if (n2 <= 15)
		l += ft_puthex_base_uppercase(n2);
	return (l);
}

int	ft_hex_base(unsigned int n)
{
	long long int	n2;
	int				l;

	l = 0;
	n2 = n;
	if (n2 >= 16)
	{
		l += ft_hex_base(n2 / 16);
		l += ft_hex_base(n2 % 16);
	}
	if (n2 <= 15)
		l += ft_puthex_base(n2);
	return (l);
}
