/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:00:19 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/29 21:03:02 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countworld(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}
static char	ft_malloc(char const *s, char c)
{
	int	len 
	char	*new;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s[len])
	{
		new[len] = s[len];
		len++;
	}
	new[len] = '\0';
	return (new);
}
char	**ft_split(char const *s, char c)
{
	int	i;
	int	word;
	char	**new;
	
	i = 0;
	word = ft_countworld(s, c);
	new = (char *)malloc((ft_malloc(s, c) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while ()
}
