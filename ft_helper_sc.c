/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_sc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:36:03 by ahhammou          #+#    #+#             */
/*   Updated: 2021/10/29 12:58:47 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "ft_putnbr_hex.c"
#include "ft_putnbr_unsigned.c"
#include "ft_putstr.c"
#include "ft_strlen.c"
#include "ft_isalpha.c"
#include <limits.h>

int	ft_printf_sc(const char *args, ...)
{
	va_list			ap;
	int				i;
	int				j;

	if (args[i] == '%' && args[i + 1] == 's')
	{
		s = va_arg(ap, char *);
		j += ft_putstr(s);
		i++;
	}
	else if (args[i] == '%' && args[i + 1] == 'c')
	{
		c = va_arg(ap, int);
		j += ft_putchar(c);
		i++;
	}
}
