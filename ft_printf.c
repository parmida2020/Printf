/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:01:20 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/18 18:42:27 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
				ft_putchar(va_arg(args, int));
			if (s[i] == 'd' || s[i] == 'i')
				ft_putnbr(va_arg(args, int));
			if (s[i] == 's')
				ft_putstr(va_arg(args, char *));
			if (s[i] == 'u')
				ft_putnbr_un(va_arg(args, unsigned long));
			if (s[i] == 'x')
				ft_print_hex(va_arg(args, unsigned int), "0123456789abcdef");
			if (s[i] == 'X')
				ft_print_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
			if (s[i] == 'p')
			{	
				ft_putstr("0x");
				ft_print_hex(va_arg(args, unsigned long int), "0123456789abcdef");
			}
			if (s[i] == '%')
				ft_putpercent(va_arg(args, int));
		}
		else if (s[i])
		{
			ft_putstr(s);
		}
		i++;
	}
	va_end(args);
	return (0);
}

int main(void)
{
	// char *c = "hello";
	// printf("niuniuniu");
	ft_printf("buy");
}
