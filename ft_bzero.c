/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:51:23 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/26 09:06:52 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}