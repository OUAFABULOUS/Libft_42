/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:32:30 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/02 18:39:44 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (start > s_len - 1)
		res = malloc(1);
	else if ((s_len - start) < len)
		res = malloc((s_len - start) + 1);
	else
		res = malloc(len + 1);
	if (!s || !res)
		return (NULL);
	if (s_len > start)
	{
		while (s[start + i] && (len - i))
		{
			res[i] = s[start + i];
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}
