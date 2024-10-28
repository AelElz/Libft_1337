/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:43:56 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/27 21:19:39 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *str;

    if (!s || !f) // Check for NULL inputs
        return NULL;

    str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char)); // Allocate memory for new string
    if (!str) // Check for malloc failure
        return NULL;

    i = 0;
    while (s[i]) // Iterate through the string
    {
        str[i] = f(i, s[i]); // Apply function f to each character
        i++;
    }
    str[i] = '\0'; // Null-terminate the new string

    return str; // Return the new string
}