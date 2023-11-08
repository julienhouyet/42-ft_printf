/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 07:53:16 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/08 12:01:38 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_nbr(int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int	ft_printf_number(va_list arg)
{
	int	nb;
	int	count;

	if (!arg)
		return (0);
	nb = va_arg(arg, int);
	count = ft_count_nbr(nb);
	ft_putnbr_fd(nb, 1);
	return (count);
}
