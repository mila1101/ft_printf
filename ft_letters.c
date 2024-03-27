/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_letters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoklova <msoklova@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:40:55 by msoklova          #+#    #+#             */
/*   Updated: 2024/03/27 15:41:43 by msoklova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int *count)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	(*count)++;
	return (1);
}

int	ft_putstr(char *s, int *count)
{
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		if (ft_putchar(*s, count) == -1)
			return (-1);
		s++;
	}
	return (1);
}
