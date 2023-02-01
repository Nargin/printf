/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:06:53 by romaurel          #+#    #+#             */
/*   Updated: 2023/02/01 11:40:45 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	option(char c, va_list params)
{
	if (c == 'c')
		return (ft_putchar(params));
	if (c == 's')
		return (ft_putstr(params));
	if (c == 'p')
		return ();
	if (c == 'd')
		return ();
	if (c == 'i')
		return ();
	if (c == 'u')
		return ();
	if (c == 'x')
		return ();
	if (c == 'X')
		return ();
	if (c == '%')
		return (ft_putchar("%"));
	else
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
		if (str[i] == '%')
			count += option(str[i++ + 1], params);
		else
			count += ft_putchar(str[i]);
	}
	return (count);
}

int	main(void)
{
	ft_printf("Test\n");
	return (0);
}
