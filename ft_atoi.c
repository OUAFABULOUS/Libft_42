/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:45:44 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/02 18:45:01 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	short			sign;
	unsigned long	result;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
		|| *nptr == '\f' || *nptr == '\v' || *nptr == '\r')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr && *nptr >= 48 && *nptr <= 57)
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	if (result > 2147483647 && sign == 1)
		return (-1);
	if (result > 2147483648 && sign == -1)
		return (0);
	return (result * sign);
}
/*
   int	ft_atoi(const char *nptr)
   {
   long int	resullt;
   int			sign;

   resullt = 0;
   sign = 1;
   if (*nptr == '+' || *nptr == '-')
   {
   if (*nptr == '-')
   sign *= -1;
   nptr++;
   }
   while (*nptr && *nptr >= 48 && *nptr <= 57)
   {
   resullt = resullt * 10 + (*nptr - 48);
   nptr++;
   }
   return (sign * resullt);
   }

   int	main()
   {
   printf("%d", ft_atoi("2147483647"));
   return (0);
   }
   */
