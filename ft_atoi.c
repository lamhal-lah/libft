/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:05:07 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/21 20:03:09 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*s;
	int		sgn;
	size_t	res;

	res = 0;
	sgn = 1;
	s = (char *)str;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sgn *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + *s - 48;
		s++;
		if (res > LONG_MAX && sgn == -1)
			return (0);
		if (res >= LONG_MAX && sgn == 1)
			return (-1);
	}
	return (res * sgn);
}
