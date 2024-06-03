/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:44:12 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/23 11:54:44 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

static void	*ft_free(char **str, int l)
{
	while (l--)
		free(str[l]);
	free(str);
	return (NULL);
}

static char	*ft_word(char const *str, char c, int *l)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	*l = i;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] != c && str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		l;
	int		cnt;

	i = 0;
	if (!s)
		return (NULL);
	cnt = count_words(s, c);
	strs = (char **)malloc((cnt + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (i < cnt)
	{
		while (*s == c)
			s++;
		strs[i] = ft_word(s, c, &l);
		if (strs[i] == NULL)
			return (ft_free(strs, i));
		i++;
		s += l;
	}
	strs[i] = NULL;
	return (strs);
}
