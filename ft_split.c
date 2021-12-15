/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:17:54 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/02 14:57:51 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	word_count;
	int	sep;

	i = 0;
	word_count = 0;
	sep = 1;
	while (s[i])
	{
		if (s[i] == c)
			sep = 1;
		if ((sep == 1) && !(s[i] == c))
		{
			word_count++;
			sep = 0;
		}
		i++;
	}
	return (word_count);
}

static char	*ft_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	word_count = ft_word_count(s, c);
	tab = malloc ((word_count + 1) * sizeof(char *));
	while (k < word_count)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		tab[k] = malloc(i - j + 1);
		tab[k] = ft_strncpy(tab[k], s + j, i - j + 1);
		k++;
	}
	tab[k] = 0;
	return (tab);
}
/*
int	main()
{
	char **tab = ft_split("  tripouille  42  ", ' ');
	printf("%s", tab[0]);
	return (0);
}
*/
