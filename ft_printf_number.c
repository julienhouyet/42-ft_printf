/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 07:53:16 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/08 11:02:13 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_number(va_list arg)
{
	int	nb;

	if (!arg)
		return (0);
	nb = va_arg(arg, int);
	return (1);
}