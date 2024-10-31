/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:00:19 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/31 16:07:06 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	ft_free(char **s, int i)
{
	while (i > 0)
	{
		--i;
		free(s[i]);
	}
	free(s);
}

static char	**fill_words(char const *s, char c, char **ptr)
{
	int	len;
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			ptr[pos] = ft_substr(s, len, i - len);
			if (!ptr[pos])
				return (ft_free(ptr, pos), NULL);
			pos++;
		}
		else
			i++;
	}
	ptr[pos] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	return (fill_words(s, c, ptr));
}
