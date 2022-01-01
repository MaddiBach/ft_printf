/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 02:29:44 by maddi             #+#    #+#             */
/*   Updated: 2021/12/16 08:28:17 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nbr)
{
	char	c;

	c = nbr % 10 + '0';
	if (nbr / 10)
		return (ft_putunbr(nbr / 10) + (int)write(1, &c, 1));
	return ((int)write(1, &c, 1));
}
