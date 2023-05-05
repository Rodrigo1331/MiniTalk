/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 04:45:45 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/12/06 12:49:53 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!big || !little) && len == 0)
		return (NULL);
	if (*little == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && (i + j) < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
		}
		j = 0;
		i++;
	}	
	return (NULL);
}

/* int main()
{
	char str[] = "Honor Among Thieves";
	char to_find[] = "Am";
	size_t len = 20;
	printf("%s\len", ft_strnstr(str, to_find, len));
} */

/* char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	ToManyLines (26)
	
	size_t	i;
	size_t	j;
	char	*dest;
	char	*src;

	dest = (char *)big;
	src = (char *)little;
	if (src[0] == '\0')
		return (dest);
	if (len == 0)
		return (NULL);
	i = 0;
	while (dest[i] != '\0')
	{
		j = 0;
		if (dest[i] == src[0])
		{
			while (dest[i + j] == src[j]
				&& (j + i) < len && src[j] != '\0')
				j++;
			if (src[j] == '\0')
				return (&dest[i]);
		}
		i++;
	}
	return (0);
} */