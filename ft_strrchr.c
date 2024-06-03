/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:10:18 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/18 19:09:43 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				l;
	unsigned char	cc;

	cc = (unsigned char)c;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == cc)
			return ((char *)(s + l));
		l--;
	}
	return (NULL);
}
