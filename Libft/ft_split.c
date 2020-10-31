/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youncho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:31:41 by youncho           #+#    #+#             */
/*   Updated: 2020/10/31 18:28:54 by youncho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	ret;
	int		chk;

	ret = 0;
	chk = 0;
	while (*s)
	{
		if (*s != c && !chk)
		{
			chk = 1;
			ret++;
		}
		else if (*s == c && chk)
			chk = 0;
		s++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	words;
	size_t	idx;

	words = count_words(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * words + 1)))
		return (0);
	while (words--)
	{
		idx = 0;
		while (*s == c)
			s++;
		while (s[idx] != c)
			idx++;
		if (!(*ret = (char *)malloc(idx + 1)))
			return (0);
		ft_strlcpy(*ret, s, idx);
		(*ret)[idx] = 0;
		ret++;
		s += idx + 1;
	}
	ret = (char **)0;
	return (ret);
}
