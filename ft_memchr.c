/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:26:44 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/24 15:24:35 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*m;
	unsigned char	cc;

	m = (unsigned char *)s;
	cc = (unsigned char )c;
	while (n--)
	{
		if (*m == cc)
			return ((void *)m);
		m++;
	}
	return (NULL);
}
