/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:23:24 by romaurel          #+#    #+#             */
/*   Updated: 2023/02/01 19:33:58 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int value)
{
	int displayInt;

	if (value < 10)
		return (ft_putchar(value + 48));
	displayInt = print_int(value / 10);
	ft_putchar(value % 10 + 48);
	return (displayInt + 1);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	while (*s)
		count += ft_putchar(*s++);
	return (count);
}

int	ft_nbrbase(int num, char *base)
{
	int	i;
	int	count;
	char	print[8];

	i = 0;
	count = 0;
	if (num < 0)
	{
		count += ft_putchar('-');
		if (num == -2147483648)
		{
			print[i++] = base[(2147483648 %	strlenbase(base))];
			num /= strlenbase(base);
		}
		num = -num;
	}
	while (num > 0)
	{
		print[i++] = base[num % strlenbase(base)];
		num /= strlenbase(base);
	}
	while (i)
		count += ft_putchar(print[--i]);
	return (count);
}
