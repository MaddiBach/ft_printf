/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:32:04 by maddi             #+#    #+#             */
/*   Updated: 2021/12/16 08:22:40 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr_hex(uintptr_t nbr)
{
	int		mod;
	char	c;

	mod = nbr % 16;
	if (mod < 10)
		c = mod + '0';
	else
		c = mod - 10 + 'a';
	if (nbr / 16)
		return (ft_putaddr_hex(nbr / 16) + (int)write(1, &c, 1));
	return ((int)write(1, &c, 1));
}
