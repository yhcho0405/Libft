/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youncho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:31:41 by youncho           #+#    #+#             */
/*   Updated: 2020/10/31 20:40:43 by youncho          ###   ########.fr       */
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
	char	*tmp;
	size_t	idx;

	idx = 0;
	if (!(ret = (char **)malloc(sizeof(char *) * count_words(s, c) + 1)))
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue;
		}
		tmp = (char *)s;
		while (*s && *s != c)
			s++;
		if (!(ret[idx] = (char *)malloc(s - tmp + 1)))
			return (0);
		ft_strlcpy(ret[idx++], tmp, s - tmp + 1);
	}
	ret[idx] = 0;
	return (ret);
}
