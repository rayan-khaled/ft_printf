/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhaled <rakhaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:36:52 by rakhaled          #+#    #+#             */
/*   Updated: 2025/06/23 16:37:01 by rakhaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	execute(char format, va_list args);
int	ft_strlen(const char *s);
int	print_str(char *str);
int	print_char(char c);
int	print_pointer(unsigned long ptr);
int	print_int(int n);
int	print_unsigned(unsigned int n);
int	print_hexa(unsigned int n, int upper);
int	ft_percent(char c);
int	in_set(char c, char *array);
int	ft_printf(const char *format, ...);

#endif