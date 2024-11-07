/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:46:14 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/06 18:22:08 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if ((unsigned char *)dst < (unsigned char *)src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char data1[] = "ABCDEFGH";
    char data2[] = "ABCDEFGH";

    // Demonstrate memcpy with overlap where dst > src
    printf("Before memcpy:\t%s\n", data1);
    memcpy(data1 + 3, data1, 5); // Attempt to copy "ABCDE" starting at index 3
    printf("After memcpy:\t%s\n", data1);

    // Demonstrate memmove with overlap where dst > src
    printf("Before memmove:\t%s\n", data2);
    memmove(data2 + 3, data2, 5); // Attempt to copy "ABCDE" starting at index 3
    printf("After memmove:\t%s\n", data2);

    return 0;
}*/