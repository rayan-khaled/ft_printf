/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhaled <rakhaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:49:31 by rakhaled          #+#    #+#             */
/*   Updated: 2025/06/23 16:37:55 by rakhaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	execute(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'd' || format == 'i')
		count += print_int(va_arg(args, int));
	else if (format == 's')
		count += print_str(va_arg(args, char *));
	else if (format == 'c')
		count += print_char((char)va_arg(args, int));
	else if (format == 'p')
		count += print_pointer((unsigned long)va_arg(args, void *));
	else if (format == 'u')
		count += print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		count += print_hexa(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		count += print_hexa(va_arg(args, unsigned int), 1);
	else if (format == '%')
		count += ft_percent(format);
	return (count);
}

int	in_set(char c, char *array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (array[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
