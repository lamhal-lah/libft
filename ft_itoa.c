/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:55:34 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/20 20:41:58 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_chr(long nbr)
{
	int		i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;
	long	nbr;

	nbr = (long)n;
	l = len_chr(n);
	str = malloc(l + 1);
	if (!str)
		return (NULL);
	str[l] = '\0';
	l--;
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (nbr > 0)
	{
		str[l] = nbr % 10 + 48;
		nbr /= 10;
		l--;
	}
	return (str);
}
