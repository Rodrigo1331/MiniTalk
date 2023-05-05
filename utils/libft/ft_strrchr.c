/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 04:45:45 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/09 09:46:35 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*s2;

	s2 = (char *) s;
	len = ft_strlen(s2);
	i = len - 1;
	if (c == '\0')
		return (&s2[len]);
	while (i >= 0)
	{
		if (s2[i] == c)
			return (&s2[i]);
		i--;
	}
	return (0);
}

/*int main (){
	const char *s = "Hello There!";
	int c = 101;

	printf("%s2\c", ft_srchr(s, c));
}*/
