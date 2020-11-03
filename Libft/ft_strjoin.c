/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youncho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 10:14:07 by youncho           #+#    #+#             */
/*   Updated: 2020/11/03 10:26:57 by youncho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(ret = malloc(len)))
		return (0);
	ft_strlcpy(ret, s1, len);
	ft_strlcat(ret, s2, len);
	return (ret);
}
