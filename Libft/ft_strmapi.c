#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s);
	if(!(ret = malloc(len + 1)))
		return (0);
	ret[len] = 0;
	while (--len)
		ret[len] = f(len, s[len]);
	ret[0] = f(len, s[0]);
	return (ret);
}