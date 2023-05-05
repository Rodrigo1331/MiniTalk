/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/28 13:01:23 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charsplit(char *s, char c, int j)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (len < j && s[len])
	{
		if (s[len] != c && len < j)
		{
			while (s[len] != c && len < j)
				len++;
			i++;
		}
		while (s[len] == c && len < j)
			len++;
	}
	return (i);
}

static char	**ft_tab(char **tab, const char *s, int len, char c)
{
	int		letter;
	int		i;

	letter = 0;
	i = 0;
	while (len > 0 && *s)
	{
		tab[i] = malloc(sizeof(char) * (len + 1));
		while (*s != c && len > 0 && *s != '\0')
		{
			tab[i][letter++] = (const char)*s;
			len--;
			s++;
		}
		while (*s == c && *s)
			s++;
		tab[i][letter] = '\0';
		letter = 0;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**tab;

	if (s == 0)
		return (0);
	len = 0;
	len = ft_strlen((char *)s);
	i = ft_charsplit((char *)s, c, len);
	tab = malloc(sizeof(char *) * (i + 1));
	if (tab == 0)
		return (0);
	tab[0] = NULL;
	if (!s || !c || !len)
		return (tab);
	while (*s == c)
		s++;
	tab = ft_tab(tab, s, len, c);
	return (tab);
}

/*int main()
{
	char *s = "                          olol";
	char **result = ft_split(s, ' ');
	int i = 0;
	while (result[i])
	{
		printf("result[%d] = \'%s\'\n", i, result[i]);
		i++;
	}
	printf("words[%d]\n", i);
} */