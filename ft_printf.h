/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:21:39 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/18 18:26:49 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char c);
void	ft_putnbr(long n);
void	ft_putstr(char *s);
void	ft_putnbr_un(unsigned long n);
void	ft_putpercent(char c);
void	ft_print_hex(unsigned int n, char *base);
void	ft_print_pointer(unsigned long n);


#endif