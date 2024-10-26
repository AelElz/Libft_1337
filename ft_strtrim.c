/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:50:34 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/26 18:09:39 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isset(char c, char const *set)
{
    size_t  i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    char    *new;

    start = 0;
    end = ft_strlen(s1);
    if (!s1 || !set)
        return (NULL);
    while (s1[start] && ft_isset(s1[start] ,set))
        start++;
    while (end > start && ft_isset(s1[end - 1], set))
        end--;
    new = (char *)malloc(end - start + 1);
    if (!new)
        return (NULL);
    ft_strlcpy(new, &s1[start], end - start + 1);
    return (new);
}
/*
int main()
{
    char s[] = "aaaHelloaaaWorldaaa";
    char set[] = "a";
    printf("%s\n",ft_strtrim(s, set));
    return (0);
}
*/