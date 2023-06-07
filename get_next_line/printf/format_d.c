/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:56:11 by seoson            #+#    #+#             */
/*   Updated: 2023/04/22 14:57:22 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd, int *cnt)
{
	long long	temp;
	char		print;

	temp = (long long)n;
	if (temp < 0)
	{
		temp *= -1;
		*cnt = *cnt + 1;
		if (write(fd, "-", 1) == -1)
			return (-1);
	}
	if (temp > 9)
		if (ft_putnbr_fd(temp / 10, fd, cnt) == -1)
			return (-1);
	print = (temp % 10) + '0';
	*cnt = *cnt + 1;
	if (write(fd, &print, 1) == -1)
		return (-1);
	return (1);
}

int	format_d(va_list arg, int *cnt)
{
	int	temp;

	temp = va_arg(arg, int);
	return (ft_putnbr_fd(temp, 1, cnt));
}
