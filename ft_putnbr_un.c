/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:05:31 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/19 18:24:58 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_un(unsigned long n)
{
	unsigned char	c;
	int				count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_un(n / 10);
	c = (n % 10) + '0';
	count += ft_putchar(c);
	return (count);
}
