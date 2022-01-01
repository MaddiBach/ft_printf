/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 01:57:29 by maddi             #+#    #+#             */
/*   Updated: 2021/12/16 19:44:49 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ft_printf.h"

int	ft_convert_p(va_list arg)
{
	return ((int)write(1, "0x", 2)
		+ ft_putaddr_hex((uintptr_t)va_arg(arg, void *)));
}

int	ft_convert_u(va_list arg)
{
	return (ft_putunbr(va_arg(arg, unsigned int)));
}

int	ft_convert_percent(va_list __attribute__((unused))arg)
{
	return (write(1, "%", 1));
}