/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:02:09 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/21 17:51:23 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found(char const *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!set || !s1)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (found(set, s1[start]) && s1[start])
		start++;
	while (found(set, s1[end]) && s1[end] && end > start)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
