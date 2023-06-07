/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:33:33 by seoson            #+#    #+#             */
/*   Updated: 2023/04/21 19:06:37 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_s(va_list arg, int *cnt)
{
	char	*s;
	int		index;

	s = va_arg(arg, char *);
	index = 0;
	if (!s)
	{
		if (write(1, &"(null)", 6) == -1)
			return (-1);
		*cnt = *cnt + 6;
		return (1);
	}
	while (s[index])
		index++;
	if (write(1, s, index) == -1)
		return (-1);
	*cnt = *cnt + index;
	return (1);
}
