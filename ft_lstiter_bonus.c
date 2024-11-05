/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:24:07 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/05 20:11:55 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*new_lst;

	new_lst = lst;
	if (new_lst == NULL || f == NULL)
		return ;
	while (new_lst)
	{
		f(new_lst -> content);
		new_lst = new_lst -> next;
	}
}
