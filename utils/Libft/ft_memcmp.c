/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/25 15:14:18 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((((unsigned char *) s1)[i] == ((unsigned char *) s2)[i])
		&& i < n - 1)
		i++;
	i = ((unsigned char *) s1)[i] - ((unsigned char *) s2)[i];
	return (i);
}

/*int main(){

	char *s1 = "3";
	char *s2 = "2";
	size_t size = 8;
	
	int i1 = ((memcmp(s1, s2, size) > 0) 
		? 1 : ((memcmp(s1, s2, size) < 0) ? -1 : 0));
	int i2 = ((ft_memcmp(s1, s2, size) > 0) 
		? 1 : ((ft_memcmp(s1, s2, size) < 0) ? -1 : 0));
	if (i1 == i2)
	{
		printf("TEST_SUCCESS");
		return (0);
	}
	printf("TEST_FAILED");
}*/