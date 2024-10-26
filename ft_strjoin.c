/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:39:03 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/26 19:42:59 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_join(char const *s)
{
    size_t  i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  len1;
    size_t  len2;
    char    *ptr;
    char    *new;

    len1 = ft_join(s1);
    len2 = ft_join(s2);
    new = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (!new)
        return (NULL);
    ptr = new;
    while (*s1)
        *ptr++ = *s1++;
    while (*s2)
        *ptr++ = *s2++;
    *ptr = '\0';
    return (new);
}