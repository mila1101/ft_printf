/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoklova <msoklova@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:56:54 by msoklova          #+#    #+#             */
/*   Updated: 2024/03/27 16:04:47 by msoklova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_type(const char type, va_list args, int *count)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int), count));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *), count));
	else if (type == 'p')
	{
		if (ft_putstr("0x", count) == -1)
			return (-1);
		return (ft_puthex_low(va_arg(args, unsigned long), count));
	}
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int), count));
	else if (type == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int), count));
	else if (type == 'x')
		return (ft_puthex_low(va_arg(args, unsigned int), count));
	else if (type == 'X')
		return (ft_puthex_up(va_arg(args, unsigned int), count));
	else if (type == '%')
		return (ft_putchar('%', count));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_print_type(*str, args, &count) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar(*str, &count) == -1)
				return (-1);
		}
		str++;
	}
	va_end(args);
	return (count);
}

//#include <stdio.h>
//#include <limits.h>

//int	main(void)
//{
//	ft_printf(" %x ", LONG_MAX);
//	printf(" %lx ", LONG_MAX);
//	return (0);
//}
