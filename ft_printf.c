/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:01:20 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/27 10:13:05 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specifier(char format, va_list args)
{
	char	*low;
	char	*upp;

	low = "0123456789abcdef";
	upp = "0123456789ABCDEF";
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), low));
	else if (format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), upp));
	else if (format == 'p')
		return (ft_pointer(va_arg(args, void *), low));
	else if (format == '%')
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
	if (!s)
		return (-1);
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count += ft_specifier(s[i], args);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}

// int main(void)
// {
// 	char *str = "Hello world this is 42 !";
// 	int *ptr;

// 	printf("My own: %i\n", ft_printf(NULL));
// 	printf("Original: %i\n", printf(NULL));

// 	printf("Original: %c\n", 98);
// 	ft_printf("My Own: %c\n", 98);
// 	printf("Original: %c\n", -200);
// 	ft_printf("My own: %c\n", -200);

// 	ft_printf("My own: %s\n", str);
// 	ft_printf("My own: %s\n", str + 5);
// 	printf("Original: %s\n", str);
// 	printf("Original: %s\n", str + 5);

// 	printf("Original: %p\n", ptr);
// 	ft_printf("My own: %p\n", ptr);

// 	ft_printf("My own: %d\n", 12342);
// 	printf("Original: %d\n", 12342);

// 	ft_printf("My own: %k\n");
// 	printf("Original: %k\n");
// }
