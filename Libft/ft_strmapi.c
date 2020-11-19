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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	i;

	if (!s || !f)
		return (0);
	if (!(ret = malloc(ft_strlen(s) + 1)))
		return (0);
	i = -1;
	while (s[++i])
		ret[i] = f(i, s[i]);
	ret[i] = 0;
	return (ret);
}
