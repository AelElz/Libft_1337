/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:44:47 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/28 16:33:29 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*int main()
{
	char s[] = "test test";
	char c = 't';
	char *result = ft_strrchr(s, c);
	if (result != NULL)
		printf("Last occurrence of '%c' is: %s\n", c, result);
	else
		printf("Character '%c' not found\n", c);

	return (0);
}*/