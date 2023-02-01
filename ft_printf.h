/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:21:11 by romaurel          #+#    #+#             */
/*   Updated: 2023/02/01 15:57:37 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);

int	ft_putstr(char *s);

int	strlenbase(char *base);

int	print_int(int value);

int	ft_nbrbase(int num, char *base);

#endif
