/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhaled <rakhaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:21:13 by rakhaled          #+#    #+#             */
/*   Updated: 2025/06/23 16:37:25 by rakhaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa(unsigned int n, int upper)
{
	unsigned int	div;
	char			c;
	char			*base;
	int				i;

	i = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (upper == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	div = 1;
	while ((n / div) >= 16)
		div = div * 16;
	while (div > 0)
	{
		c = base[n / div];
		write(1, &c, 1);
		n = n % div;
		div = div / 16;
		i++;
	}
	return (i);
}

int	ft_percent(char c)
{
	if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
