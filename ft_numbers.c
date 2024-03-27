/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoklova <msoklova@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:06:25 by msoklova          #+#    #+#             */
/*   Updated: 2024/03/27 16:01:46 by msoklova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int *count)
{
	if (n < 0)
	{
		if (ft_putchar('-', count) == -1)
			return (-1);
		if (n == -2147483648)
		{
			if (ft_putstr("2147483648", count) == -1)
				return (-1);
		}
		n = -n;
	}
	if (n > 9)
	{
		if (ft_putnbr(n / 10, count) == -1)
			return (-1);
		if (ft_putnbr(n % 10, count) == -1)
			return (-1);
	}
	else if (n >= 0 && n <= 9)
	{
		if (ft_putchar(n + '0', count) == -1)
			return (-1);
	}
	return (1);
}

int	ft_putnbr_unsigned(unsigned int n, int *count)
{
	if (n > 9)
	{
		if (ft_putnbr(n / 10, count) == -1)
			return (-1);
		if (ft_putnbr(n % 10, count) == -1)
			return (-1);
	}
	else if (n >= 0 && n <= 9)
	{
		if (ft_putchar(n + '0', count) == -1)
			return (-1);
	}
	return (1);
}

int	ft_puthex_low(unsigned long n, int *count)
{
	if (n >= 16)
	{
		if (ft_puthex_low(n / 16, count) == -1)
			return (-1);
		if (ft_puthex_low(n % 16, count) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar("0123456789abcdef"[n], count) == -1)
			return (-1);
	}
	return (1);
}

int	ft_puthex_up(unsigned long n, int *count)
{
	if (n >= 16)
	{
		if (ft_puthex_up(n / 16, count) == -1)
			return (-1);
		if (ft_puthex_up(n % 16, count) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar("0123456789ABCDEF"[n], count) == -1)
			return (-1);
	}
	return (1);
}

//void	ft_putpointer(unsigned long long n)
//{
//	write(1, "0x", 2);
//	ft_puthex_low(n);
//}
