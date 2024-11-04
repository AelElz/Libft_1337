/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:06:29 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/04 19:44:37 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nodes;

	new_nodes = (t_list *)malloc(sizeof(t_list));
	if (!new_nodes)
		return (NULL);
	new_nodes -> content = content;
	new_nodes -> next = NULL;
	return (new_nodes);
}
