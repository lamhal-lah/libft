/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:00:16 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/21 20:03:47 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	while (i < count * size)
		ptr[i++] = 0;
	return (ptr);
}
