/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:17:14 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/12/06 13:02:32 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	s = 0;
	i = 0;
	d = 0;
	if (!size)
		return (ft_strlen(src));
	while (dst[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (d >= size)
		return (s + size);
	while ((src[i] != 0) && ((size - 1) > (d + i)))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (s + d);
}
