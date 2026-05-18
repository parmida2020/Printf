/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:03:27 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/18 18:15:50 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_hex(unsigned int n, char *base)
{
    if (n >= 16)
        ft_print_hex(n / 16, base);
    ft_putchar(base[n % 16]);
}
