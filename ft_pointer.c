/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:17:27 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/24 17:38:09 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *s, char *base)
{
	int	count;

	count = 0;
	if (!s)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_print_hex((unsigned long)s, base);
	return (count);
}
