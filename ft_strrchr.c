/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:42:09 by omoudni           #+#    #+#             */
/*   Updated: 2021/11/30 17:35:36 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		s_len;
	size_t		ind;
	const char	*s_rev;

	s_len = ft_strlen(s);
	ind = 0;
	s_rev = s + s_len - 1;
	if (!c)
		return ((char *)(s + s_len));
	while (ind < s_len)
	{
		if (*s_rev == (char)c)
			return ((char *)s_rev);
		s_rev--;
		ind++;
	}
	return (NULL);
}
