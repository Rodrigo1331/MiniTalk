/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:28:03 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/09 14:27:21 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*src_dest(unsigned char *d, unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	i = 0;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (0);
	if (src >= dest)
	{
		src_dest(d, s, n);
	}
	else
	{
		i = n;
		while (i)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

/*int main (){
	char dest[] = "oldstring";
   	const char src[]  = "newstring";

	printf("Before memmove dest = %s\n", dest);
   	ft_memmove(dest, src, 9);
   	printf("After memmove dest = %s\n", dest);

  	return(0);
}*/