/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:50:01 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/25 10:46:45 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i] && s2[i])
		i++;
	i = ((unsigned char *) s1)[i] - ((unsigned char *) s2)[i];
	return (i);
}

/* int	main(void){
	char str1[] = "Hello There";
	char str2[] = "Hello there";
	unsigned int n;

	n = 8;
	printf("%d\n", ft_strncmp(str1, str2, n));
} */