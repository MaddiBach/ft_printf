/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:19:54 by maddi             #+#    #+#             */
/*   Updated: 2021/12/18 20:41:27 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_keyval	t_keyval;
struct s_keyval
{
	char	key;
	int		(*f)(va_list arg);
};

int	ft_strlen(char *s);
int	ft_putchar(char c);
int	ft_putstr(char *c);
int	ft_putnbr(int nbr);
int	ft_putunbr(unsigned int nbr);
int	ft_putunbr_hex(unsigned int nbr, char c);
int	ft_putaddr_hex(uintptr_t nbr);
int	ft_printf(const char *input, ...);

int	ft_convert_percent(va_list arg);
int	ft_convert_u(va_list arg);
int	ft_convert_p(va_list arg);
int	ft_convert_di(va_list arg);
int	ft_convert_xupper(va_list arg);
int	ft_convert_xlower(va_list arg);
int	ft_convert_s(va_list arg);
int	ft_convert_c(va_list arg);

static t_keyval const	g_keyval[] = {
{'c', ft_convert_c},
{'s', ft_convert_s},
{'p', ft_convert_p},
{'d', ft_convert_di},
{'i', ft_convert_di},
{'u', ft_convert_u},
{'x', ft_convert_xlower},
{'X', ft_convert_xupper},
{0}
};

#endif