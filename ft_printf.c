/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:30:18 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/02 12:41:29 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_str(va_list *arg, int *count)
{
	char	*str;
	int		i;

	str = va_arg(*arg, char *);
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
		++(*count);
	}
	return (0);
}

static int	*ft_convert(int *count, va_list *arg, char var)
{
	if (var == 'c')
		ft_putchar_fd(va_arg(*arg, int), 1);
	if (var == 's')
		ft_print_str(arg, count);
	if (var == 'd')
		ft_putnbr_fd(va_arg(*arg, int), 1);
	if (var == '%')
		ft_putchar_fd('%', 1);
	return (0);
}

int			ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(argptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_convert(&count, &argptr, str[i + 1]);
			++i;
		}
		else {
			ft_putchar_fd(str[i], 1);
		}
		++count;
		++i;
	}
	va_end(argptr);
	return (count);
}
