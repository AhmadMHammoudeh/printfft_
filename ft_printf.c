/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:13:04 by ahhammou          #+#    #+#             */
/*   Updated: 2021/10/29 12:55:31 by ahhammou         ###   ########.fr       */
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

int	ft_printf(const char *args, ...)
{
	va_list			ap;
	int				i;
	int				j;
	unsigned long long int	n;
	char			c;
	char			*s;

	i = 0;
	j = 0;
	va_start(ap, args);
	while (args[i])
	{
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
		else if (args[i] == '%' && args[i + 1] == '%')
		{
			j += ft_putchar('%');
			i++;
		}
		else if (args[i] == '%' && (args[i + 1] == 'd' || args[i + 1] == 'i'))
		{
			n = va_arg(ap, int);
			j += ft_putnbr(n);
			i++;
		}
		else if (args[i] == '%' && args[i + 1] == 'X')
		{
			n = va_arg(ap, unsigned int);
			j += ft_putnbr_hexc(n);
			i++;
		}
		else if (args[i] == '%' && args[i + 1] == 'x')
		{
			n = va_arg(ap, unsigned int);
			j += ft_putnbr_hex(n);
			i++;
		}
		else if (args[i] == '%' && args[i + 1] == 'p')
		{
			n = va_arg(ap, unsigned long long);
			j += ft_putnbr_pre_p1(n);
			i++;
		}
		else if (args[i] == '%' && args[i + 1] == 'u')
		{
			n = va_arg(ap, unsigned int);
			j += ft_putnbr_unsigned(n);
			i++;
		}
		else if (args[i] == ' ' || ft_isalpha(args[i]))
			j += ft_putchar(args[i]);
		i++;
	}
	va_end(ap);
	return (j);
}

// int	main()
// {
// // 	char	c = 'A';
// // 	unsigned long	a = -ULONG_MAX;
// // 	// unsigned int	a = -42949295;
// // 	char	*s = "this is a test";
// 	int i;
// 	int j;

// // 	// printf("%lu", a);
// // // 	// printf("%s", s);
// // // 	// ft_printf("%s", s);
// i = printf(" %d %+d ", 10, -10);
// 	printf("%d", i);

// // j =	ft_printf(" %-10p %p ", (ULONG_MAX), -ULONG_MAX);
// //  	printf("%d\n", j);
// }
