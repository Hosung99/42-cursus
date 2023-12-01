/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <seoson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:26:35 by seoson            #+#    #+#             */
/*   Updated: 2023/11/14 14:27:10 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	check_isalpha;
	int	check_isdigit;

	check_isalpha = ft_isalpha(c);
	check_isdigit = ft_isdigit(c);
	if (check_isalpha || check_isdigit || c == 63)
		return (1);
	else
		return (0);
}
