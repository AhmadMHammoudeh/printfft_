/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:14:00 by ahhammou          #+#    #+#             */
/*   Updated: 2021/10/26 21:22:15 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *args, ...);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
int		ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_putnbr_unsigned(unsigned int nb);
int     ft_putnbr_hex(unsigned int nb);
int     ft_putnbr_hexC(unsigned int nb);
int     ft_putnbr_pre_p(unsigned int nb);
int     ft_putnbr_p(unsigned long int nb);

#endif
