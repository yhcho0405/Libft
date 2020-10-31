/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youncho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:41:29 by youncho           #+#    #+#             */
/*   Updated: 2020/10/09 21:14:20 by youncho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	cnt;

	cnt = 0;
	while (*(dest + cnt) && cnt < size)
		cnt++;
	while (*src && cnt + 1 < size)
	{
		*(dest + cnt) = *src;
		src++;
		cnt++;
	}
	if (cnt < size)
		*(dest + cnt) = 0;
	while (*src)
	{
		src++;
		cnt++;
	}
	return (cnt);
}
