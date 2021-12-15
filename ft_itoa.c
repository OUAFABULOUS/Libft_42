/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:13:35 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/02 15:35:39 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	long int	nb;
	int			len;

	len = 1;
	if (n < 0)
	{
		len++;
		nb = -(long int)n;
	}
	else
		nb = n;
	while (nb / 10 > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*res;
	int			i;
	long int	nb;

	len = ft_intlen(n);
	res = malloc(len + 1);
	i = 0;
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		nb = -(long int)n;
	else
		nb = n;
	while (++i < len)
	{
		res[len - i] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		res[len - i] = '-';
	else
		res[len - i] = (nb % 10) + '0';
	return (res);
}
