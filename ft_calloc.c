/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:48:32 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/28 16:31:31 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
	char    *new;
	size_t  total_size;
	size_t  i;
	
	i = 0;
	total_size = count * size;
	new = malloc(total_size);
	if (!new)
		return (NULL);
	while (i < total_size)
	{
		new[i] = 0;
		i++;
	}
	return ((void *)new);
}