/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoklova <msoklova@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:56:50 by msoklova          #+#    #+#             */
/*   Updated: 2024/03/27 15:49:03 by msoklova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *type, ...);
int	ft_putchar(char c, int *count);
int	ft_putstr(char *s, int *count);
int	ft_putnbr(int n, int *count);
int	ft_putnbr_unsigned(unsigned int n, int *count);
int	ft_puthex_low(unsigned long n, int *count);
int	ft_puthex_up(unsigned long n, int *count);
int	ft_print_type(const char type, va_list args, int *count);

#endif
