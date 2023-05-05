/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:48:33 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/05/05 15:25:44 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *s, ...);
int		variables_printf(const char *s, int i, va_list arg_p);
char	*ft_strchr(const char *s, int c);

int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);

int		ft_hex_base(unsigned int n);
int		ft_puthex_base(unsigned int n);
int		ft_puthex_base_uppercase(unsigned int n);
int		ft_hex_base_uppercase(unsigned int n);

int		count_digit(int n);
char	*ft_strchr(const char *s, int c);

int		ft_putpointer(unsigned long long ptr);
int		ft_print_ptr(uintptr_t ptr);
int		ft_putpointer(unsigned long long ptr);

#endif
