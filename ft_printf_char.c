/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:47:08 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/08 13:48:29 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(va_list arg)
{
	char	c;
	
	c = va_arg(arg, int);
	if (c < 0)
		return (-1);
	ft_putchar_fd(c, 1);
	return (1);
}
