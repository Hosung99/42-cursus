/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <seoson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:40:07 by seoson            #+#    #+#             */
/*   Updated: 2023/09/13 21:57:58 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, int data)
{
	t_list	*last;
	t_list	*temp;

	if ((*lst) == NULL)
		*lst = ft_lstnew(data);
	else
	{
		last = ft_lstlast(*lst);
		temp = ft_lstnew(data);
		last->next = temp;
	}
}
