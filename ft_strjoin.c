/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:19:54 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/02 14:42:42 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*res;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	res = malloc(s1_len + s2_len + 1);
	if (!res)
		return (NULL);
	while (i < s1_len)
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		res[i + s1_len] = s2[i];
		i++;
	}
	res[s1_len + s2_len] = '\0';
	return (res);
}
/*
int	main()
{
	printf("%s", ft_strjoin("tripouille", "42"));
	return (0);
}
*/
