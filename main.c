/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:06:53 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/30 14:23:55 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
//#include "libftprintf.h"

static void	option(char c, va_list params)
{
	if (c == 'c')
		write(1, )
}

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list params;
	va_start(params, str);

	i = 0;
	while (str[i])
		if (str[i] == '%')
			option(str[i + 1], params);
	return (i);
}

int	main()
{
	ft_printf("Test\n");
	return (0);
}
