/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:01:20 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/19 18:37:56 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specifier(char str, va_list args)
{
	char	*low;
	char	*up;

	low = "0123456789abcdef";
	up = "0123456789ABCDEF";
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str == 'u')
		return (ft_putnbr_un(va_arg(args, unsigned int)));
	else if (str == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), low));
	else if (str == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), up));
	else if (str == 'p')
	{
		ft_putstr("0x");
		return (2 + ft_print_hex(va_arg(args, unsigned long), low));
	}
	else if (str == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			count += ft_specifier(s[++i], args);
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}

//int main(void)
//{
//	char *s = "123456";
//	printf("%s\n", s);
//	ft_printf("%s\n", s);
	
//	printf("%d\n", 12345);
//	ft_printf("%d\n", 12345);
//}