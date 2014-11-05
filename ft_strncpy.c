#include "libft.h"

char	*ft_strncpy(char *restrict dst, const char *restrict src, size_t n)
{
	unsigned int index;
	unsigned int len;

	while(src[len++]);
	index = 0;
	while(index < len && index < n)
	{
		dst[index] = src[len];
		index++;
	}
	while(index < n)
	{
		dst[index] = '\0';
		index++;
	}
	return (dst);
}
