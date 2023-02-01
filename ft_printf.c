/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:06:53 by romaurel          #+#    #+#             */
/*   Updated: 2023/02/02 00:22:29 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define FLAG "cspdiuxX%"

int	test_option(char c)
{
	while (*FLAG)
		if (c == *FLAG)
			return (1);
	return (0);
}

int	option(char c, va_list params)
{
	if (c == 'c')
		return (ft_putchar(va_arg(params, int)));
	if (c == 's')
		return (ft_putstr((char *) va_arg(params, char *)));
	if (c == 'p')
		return (1);
	if (c == 'd')
		return (print_int((int) va_arg(params, int)));
	if (c == 'i')
		return (ft_nbrbase((int) va_arg(params, int), "0123456789"));
	if (c == 'u')
		return (print_int((unsigned int) va_arg(params, unsigned int)));
	if (c == 'x')
		return (ft_nbrbase((int) va_arg(params, int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_nbrbase((int) va_arg(params, int), "0123456789ABCDEF"));
	if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	params;

	va_start(params, str);
	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1] && test_option(str[i + 1]))
			count += option(str[i++ + 1], params);
		else
			count += ft_putchar(str[i]);
	}
	return (count);
}
/*
int	main(void)
{
	ft_printf("%d\n", ft_printf("Test% %d %c\n", 56, 0));
	return (0);
}*/
