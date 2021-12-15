/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:20:01 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/02 18:49:37 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	size_t	i;

	l_len = ft_strlen(little);
	i = 0;
	if (!*little)
		return ((char *)big);
	while ((len - i) && *big)
	{
		if (*big == *little && !ft_strncmp(big, little, (int)l_len)
			&& (i + l_len <= len))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		i = -1;
		while (big[++i] && big[i] == little[i] && len - i)
			if (!little[i + 1])
				return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
*/
/*
int	main()
{
	char	haystack[30] = "aaabbbcccd";
	printf("%s", ft_strnstr(haystack, "cd", 8));
	return (0);
}
*/
