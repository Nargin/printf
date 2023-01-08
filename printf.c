/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:06:53 by romaurel          #+#    #+#             */
/*   Updated: 2023/01/08 17:32:41 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	option(char c, va_list params)
{
	if (c == 'c')
		write(1, params, 1);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	count;
	va_list params;
	va_start(params, str);

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
			count += option(str[i + 1], params);
		else
			count++;
	}
	return (i);
}

int	main()
{
	ft_printf("Test\n");
	return (0);
}
