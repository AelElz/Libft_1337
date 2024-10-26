/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:46:14 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/24 19:32:52 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    unsigned char   *ptr_src;
    unsigned char   *ptr_dest;
    
    ptr_src = (unsigned char *)src;
    ptr_dest = (unsigned char *)dst;
    if (!dst && !src)
        return (NULL);
    if (ptr_dest < ptr_src)
    {
        i = 0;
        while (i < len)
        {
            ptr_dest[i] = ptr_src[i];
            i++;
        }
    }
    else
    {
        while (len > 0)
        {
            len--;
            ptr_dest[len] = ptr_src[len];
        }
    }
    return (dst);
}
/*int main()
{
    char str1[] = "Hello, World!";
    printf("Before ft_memmove: %s\n", str1);
    ft_memmove(str1 + 7, str1, 6);
    printf("After ft_memmove: %s\n", str1);
    return 0;
}*/