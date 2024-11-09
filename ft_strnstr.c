/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:22:20 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/09 11:07:18 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strnstr(const char *src, const char *search, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	search_len;

	i = 0;
	if (!src && len == 0)
		return (NULL);
	search_len = ft_strlen(search);
	if (search_len == 0)
		return ((char *)&src[i]);
	while (src[i] && search_len + i <= len)
	{
		j = 0;
		while (search[j] && src[i + j] == search[j])
			j++;
		if (j == search_len)
			return ((char *)&src[i]);
		i++;
	}
	return (NULL);
}
