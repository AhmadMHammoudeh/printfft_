/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:13:04 by ahhammou          #+#    #+#             */
/*   Updated: 2021/10/26 21:27:11 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "ft_putnbr_unsigned.c"
#include "ft_putstr.c"
#include "ft_strlen.c"
#include "ft_isalpha.c"

int	ft_printf(const char *args, ...)
{
	va_list	ap;
	int		i;
	int		j;
	int		n;
	char	c;
	char	*s;

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
		else if (args[i] == '%' && args[i + 1] == 'd' |args[i + 1] == 'i')
		{
			n = va_arg(ap, int);
			j += ft_putnbr(n);
			i++;
		}
		else if (args[i] == '%' && args[i + 1] == 'u')
		{
			n = va_arg(ap, unsigned int);
			j += ft_putnbr_unsigned(n);
			i++;
		}
		else if (args[i] == ' ' || ft_isalpha(args[i]))
		{
			j += ft_putchar(args[i]);
		}
		i++;
	}
	va_end(ap);
	return (j);
}

// int	main(int argv, char **argc)
// {
// 	char	c = 'c';
// 	int	a = 123456;
// 	char	*s = "this is a test";
// 	int i = 0;
	
	// // printf("%s", )
	// while (i < argv)
	// {
	// 	ft_printf(*argc);
	// 	i++;
	// }
// }
// int	main()
// {
// 	char	c = 'A';
// 	// int	a = 123456;
// 	unsigned int	a = -42949295;
// 	char	*s = "this is a test";
// 	int i;
// 	int j;

// // 	// printf("%s", s);
// // 	// ft_printf("%s", s);
// // i = ft_printf("%d", a);
// // 	printf("%d", i);
// 	printf("%u\n", a);
// 	ft_printf("%u", a);
// // j = printf("%d", a);
// // 	ft_printf("%d\n", i);

	
// }
