/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:28:03 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/12/06 16:35:15 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	s1 = malloc(sizeof(*s) * (len + 1));
	if (s1 == 0)
		return (0);
	while (s[j])
	{
		if (start <= j && len > i)
		{
			s1[i++] = s[j];
		}
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

/*int main(){
	char const *s = "HonorAmongThieves";
	unsigned int start = 5;
	size_t len = 5;
	printf("%s\n", ft_substr(s, start, len));
}*/