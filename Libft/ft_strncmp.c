/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youncho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:45:08 by youncho           #+#    #+#             */
/*   Updated: 2020/10/09 21:06:16 by youncho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while (*s1 && *s2 && cnt < n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		cnt++;
		s1++;
		s2++;
	}
	if (cnt == n)
	{
		s1--;
		s2--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
