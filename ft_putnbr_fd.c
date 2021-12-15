/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:20:37 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/02 18:45:31 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			pow;
	long int	nb;
	long int	nb_2;

	pow = 1;
	if (n < 0)
		nb = -(long int)n;
	else
		nb = n;
	nb_2 = nb;
	while (nb_2 / 10)
	{
		pow *= 10;
		nb_2 /= 10;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (pow)
	{
		ft_putchar_fd(((nb / pow) + 48), fd);
		nb %= pow;
		pow /= 10;
	}
}
