/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:00:19 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/27 18:11:44 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdel(char s, char c)
{
    return (s == c);   
}
int ft_count_words(char const *s, char c)
{
    int count = 0;
    int i = 0;

    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (count);
}
char    **ft_split(char const *s, char c)
{
    size_t  i;
    size_t  j;
    size_t  start;
    char    **new;

    i = 0;
    j = 0;
    if (!s || !(new = malloc((ft_count_words(s, c) + 1) * sizeof(char *))))
        return NULL;
    while (s[i])
    {
        while (s[i] && ft_isdel(s[i], c))
            i++;
        start = i;
        while (s[i] && !ft_isdel(s[i], c))
            i++;
        if (i < start)
        {
            if (!new[j])
            {
                while (j--)
                {
                    free(new[j]);
                    free(new);
                    return (NULL);
                }
            }
            ft_strlcpy(new[j++], s + start, i - start + 1);
        }
    }
    new[j] = NULL;
    return (new);
}