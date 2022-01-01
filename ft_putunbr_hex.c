/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 02:45:41 by maddi             #+#    #+#             */
/*   Updated: 2021/12/16 19:49:08 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_hex(unsigned int nbr, char c)
{
	int		mod;
	char	digit;

	mod = nbr % 16;
	if (mod < 10)
		digit = mod + '0';
	else
		digit = mod - 10 + c;
	if (nbr / 16)
		return (ft_putunbr_hex(nbr / 16, c) + (int)write(1, &digit, 1));
	return ((int)write(1, &digit, 1));
}
