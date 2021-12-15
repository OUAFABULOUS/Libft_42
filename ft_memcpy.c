/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:33:01 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/01 09:07:10 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	if (!src && !dest)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	dest[100];
	ft_memset(dest, 'O', 100);
	char	src[2] = {'A', 'A'};
	ft_memcpy(dest, src, 2);
	printf("%c %c %c", dest[0], dest[1], dest[2]);

	char	dest2[100];
	memset(dest2, 'O', 100);
	char	src2[2] = {'A', 'A'};
	memcpy(dest2, src, 2);
	printf("%c %c %c", dest2[0], dest2[1], dest2[2]);



	return (0);
}
*/
