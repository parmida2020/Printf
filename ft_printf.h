/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:21:39 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/19 17:30:41 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putnbr(long n);
int		ft_putstr(char *s);
int		ft_putnbr_un(unsigned long n);
int		ft_print_hex(unsigned int n, char *base);

#endif