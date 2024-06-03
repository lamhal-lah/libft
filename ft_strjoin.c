/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:17:03 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/21 18:33:15 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*txt;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	txt = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!txt)
		return (NULL);
	while (s1[j])
		txt[i++] = s1[j++];
	j = 0;
	while (s2[j])
		txt[i++] = s2[j++];
	txt[i] = '\0';
	return (txt);
}
