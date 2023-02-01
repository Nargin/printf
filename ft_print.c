/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:23:24 by romaurel          #+#    #+#             */
/*   Updated: 2023/02/01 15:10:35 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printInt(int value)
{
	int displayInt;

	if (value < 10)
		return (ft_putchar(value + 48));
	displayInt = printInt(value / 10);
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
	char	print[32];

	i = 0;
	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		if (nbr == -2147483648)
		{
			print[i++] 
			
		}
	}
}

int	main(void)
{
	printInt(ft_putstr("jofoiqwjdoiqwj"));
}
