/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 03:36:31 by maddi             #+#    #+#             */
/*   Updated: 2021/12/16 08:23:32 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nb;
	char			c;

	nb = n;
	if (n < 0)
	{
		write(1, "-", 1);
		nb = -n;
	}
	c = nb % 10 + '0';
	if (nb / 10)
		return (ft_putnbr(nb / 10) + (int)write(1, &c, 1) + (n < 0));
	return ((int)write(1, &c, 1) + (n < 0));
}
