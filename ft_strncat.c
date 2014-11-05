#include "libft.h"

char	*ft_strncat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	dst_len;
	size_t	i;

	dst_len = 0;
	while(dst[dst_len++]);
	while(i < n && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst);
}
