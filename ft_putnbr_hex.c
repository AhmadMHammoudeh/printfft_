/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:42:10 by ahhammou          #+#    #+#             */
/*   Updated: 2021/10/26 21:22:58 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlength_h(unsigned long n)
{
	if (n > 281474976710656)
		return (13);
	if (n > 17592186044416)
		return (12);
	if (n > 1099511627776)
		return (11);
	if (n > 68719476736)
		return (10);
	if (n > 4294967296)
		return (9);
	if (n > 268435456)
		return (8);
	if (n > 16777216)
		return (7);
	if (n > 1048576)
		return (6);
	if (n > 65536)
		return (5);
	if (n > 4096)
		return (4);
	if (n > 255)
		return (3);
	if (n > 15)
		return (2);
	return (1);
}

static int	ft_numlength_L(unsigned long n)
{
	if (n > 4503599627370496 * 256)
		return (16);
	if (n > 4503599627370496 * 16)
		return (15);
	if (n > 4503599627370496)
		return (14);
	return (0);
}

int	ft_putnbr_hexC(unsigned int nb)
{
	int	i;

	i = ft_numlength_h(nb);
	if (nb > 15)
	{
		ft_putnbr_hexC(nb / 16);
	}
	ft_putchar_hexC(48 + nb % 16);
	return (i);
}

int	ft_putnbr_hex(unsigned int nb)
{
	int	i;

	i = ft_numlength_h(nb);
	if (nb > 15)
	{
		ft_putnbr_hex(nb / 16);
	}
	ft_putchar_hex(48 + nb % 16);
	return (i);
}


int	ft_putnbr_p(unsigned long int nb)
{
	int					i;

	i = ft_numlength_L(nb);
	if (!i)
		i = ft_numlength_h(nb);
	i += 2;
	if (nb > 15)
	{
		ft_putnbr_p(nb / 16);
	}
	ft_putchar_hex(48 + nb % 16);
	return (i);
}

