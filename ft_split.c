/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:00:19 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/31 13:59:10 by ael-azha         ###   ########.fr       */
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
		if (s[i] != c && s[i + 1] == c || s[i + 1] == '\0')
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

char	*ft_fill_word(char **new, char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	new = (char *)malloc((count + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[count] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**word;

	i = 0;
	count = ft_word_count(s, c);
}
