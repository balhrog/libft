#include "libft.h"

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	unsigned int len;

	i = 0;
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}
