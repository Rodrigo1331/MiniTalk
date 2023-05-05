/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:50:01 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/12/06 16:36:18 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;
	int		size;

	if (s1 == 0 || set == 0)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && (ft_strchr(set, s1[i]) != 0))
		i++;
	while (len > i && (ft_strchr(set, s1[len - 1]) != 0))
		len--;
	size = len - i;
	str = malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (0);
	len = 0;
	while (size-- > 0)
		str[len++] = s1[i++];
	str[len] = '\0';
	return (str);
}

/*int main()
{
	char const* s1 = "WarhammerWa";
	char const* set = "War";
	char *str;


	str = ft_strtrim(s1, set);
	printf("%s\n", str);

}*/
