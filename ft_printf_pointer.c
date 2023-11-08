/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 07:53:26 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/08 12:27:37 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_printf_hexa_pointer_fd(unsigned long nb, int fd)
{
	if (nb >= 16)
	{
		ft_printf_hexa_pointer_fd(nb / 16, fd);
		ft_printf_hexa_pointer_fd(nb % 16, fd);
	}
	else 
	{
		if (nb <= 9)
		{
			ft_putchar_fd(nb + '0', fd);
		}
		else
		{
			ft_putchar_fd(nb % 10 + 'a', fd);
		}
	}
	return (0);
}

int	ft_printf_pointer(va_list arg)
{
	unsigned long	nb;
	int				count;

	if (!arg)
		return (0);
	nb = va_arg(arg, unsigned long);
	count = ft_count_hexa(nb);
	ft_putstr_fd("0x", 1);
	ft_printf_hexa_pointer_fd(nb, 1);
	return (count + 2);
}
