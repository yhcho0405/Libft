/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youncho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 09:16:45 by youncho           #+#    #+#             */
/*   Updated: 2020/11/13 14:44:07 by youncho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(ret = malloc(len + 1)))
		return (0);
	ret[len] = 0;
	while (--len)
		ret[len] = f(len, s[len]);
	ret[0] = f(len, s[0]);
	return (ret);
}
