/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:48:32 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/03 21:23:53 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;
	size_t	total_size;

	if (count == 0 || size == 0)
		return (malloc(0));
	total_size = count * size;
	new = malloc(total_size);
	if (!new)
		return (NULL);
	ft_bzero(new, total_size);
	return (new);
}
