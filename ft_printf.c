/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:42:20 by maddi             #+#    #+#             */
/*   Updated: 2021/12/18 20:43:53 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_conversion(char type, va_list arg)
{
	int	i;

	i = 0;
	if (type == 0)
		return (0);
	while (g_keyval[i].f && g_keyval[i].key != type)
		i++;
	if (g_keyval[i].f)
		return (g_keyval[i].f(arg));
	return (write(1, &type, 1));
}

int	ft_printf(const char *input, ...)
{
	va_list	arg;
	int		cpt;

	va_start(arg, input);
	cpt = 0;
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			cpt += ft_treat_conversion(*input, arg);
			if (*input)
				input++;
		}
		else
		{
			cpt += ft_putchar(*input);
			input++;
		}
	}
	va_end(arg);
	return (cpt);
}

