/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:47:08 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/08 09:09:42 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(va_list arg)
{
	char	c;

	if (!arg)
		return (0);
	c = va_arg(arg, int);
	ft_putchar_fd(c, 1);
	return (1);
}
