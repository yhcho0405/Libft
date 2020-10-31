/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youncho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:40:14 by youncho           #+#    #+#             */
/*   Updated: 2020/10/09 22:24:43 by youncho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LMAX 9223372036854775807

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	ans;

	ans = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ans *= 10;
		ans += *str - '0';
		str++;
	}
	if (LMAX < ans)
		return (-1);
	ans *= sign;
	return (ans);
}
