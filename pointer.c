/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhaled <rakhaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:27:24 by rakhaled          #+#    #+#             */
/*   Updated: 2025/06/23 16:10:41 by rakhaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long ptr)
{
	unsigned long	div;
	int				count;
	char			c;
	char			*base;

	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	base = "0123456789abcdef";
	div = 1;
	count = 2;
	while (ptr / div >= 16)
	{
		div = div * 16;
	}
	while (div > 0)
	{
		c = base[ptr / div];
		write(1, &c, 1);
		ptr = ptr % div;
		div = div / 16;
		count++;
	}
	return (count);
}
