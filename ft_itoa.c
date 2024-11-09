/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:02:25 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/09 18:26:33 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count = 1;
	else
	{
		while (nbr != 0)
		{
			nbr = nbr / 10;
			count++;
		}
	}
	return (count);
}

static char	*ft_malloc(int len)
{
	char	*new;

	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[0] = '0';
	return (new);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*result;
	long	nbr;

	nbr = n;
	len = ft_int_len(n);
	result = ft_malloc(len);
	if (!result)
		return (NULL);
	if (n < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = '\0';
	return (result);
}
