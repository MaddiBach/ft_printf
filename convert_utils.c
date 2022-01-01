/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 03:37:12 by maddi             #+#    #+#             */
/*   Updated: 2021/12/16 08:14:48 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_c(va_list arg)
{
	return (ft_putchar((char)va_arg(arg, int)));
}

int	ft_convert_s(va_list arg)
{
	return (ft_putstr(va_arg(arg, char *)));
}

int	ft_convert_xlower(va_list arg)
{
	return (ft_putunbr_hex(va_arg(arg, unsigned int), 'a'));
}

int	ft_convert_xupper(va_list arg)
{
	return (ft_putunbr_hex(va_arg(arg, unsigned int), 'A'));
}

int	ft_convert_di(va_list arg)
{
	return (ft_putnbr(va_arg(arg, int)));
}
