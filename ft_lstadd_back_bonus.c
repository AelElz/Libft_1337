/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:00:26 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/04 23:10:43 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (new == NULL)
		return ;
	if ((*lst) == NULL)
	{
		*lst = new;
		new -> next = NULL;
		return ;
	}
	while (last -> next != NULL)
		last = last -> next;
	last -> next = new;
	new -> next = NULL;
}
