/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:16:20 by omoudni           #+#    #+#             */
/*   Updated: 2021/11/24 22:47:37 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	offset;
	size_t	src_index;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	offset = d_len;
	src_index = 0;
	if (size > d_len)
	{
		while (*(src + src_index) && offset < (size - 1))
		{
			*(dst + offset) = *(src + src_index);
			offset++;
			src_index++;
		}
		*(dst + offset) = '\0';
		return (d_len + s_len);
	}
	else
		return (size + s_len);
}
