/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:43:45 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/02 18:48:12 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s);
	new = (void *)malloc(len + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, s, len);
	((char *)new)[len] = '\0';
	return ((char *)new);
}
