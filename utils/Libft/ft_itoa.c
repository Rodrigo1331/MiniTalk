/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/28 13:01:32 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(int n)
{
	long int		num;
	unsigned int	len;

	num = n;
	len = 0;
	if (num == 0)
		len++;
	if (num < 0)
		len++;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*s;
	unsigned int		i;
	unsigned int		len;

	len = count_digit(n);
	s = malloc(sizeof(char) * (len + 1));
	i = n;
	if (!s)
		return (0);
	if (n < 0)
	{
		s[0] = '-';
		i = -i;
	}
	if (i == 0)
		s[0] = '0';
	s[len] = '\0';
	while (i)
	{
		s[len - 1] = i % 10 + '0';
		i = i / 10;
		len--;
	}
	return (s);
}

/*int main(){
	int n = 0;

	printf("%s\n", ft_itoa(n));
	return 0;
}*/