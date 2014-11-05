#include "libft.h"

char	*ft_strcat(char *restrict dst, const char *restrict src)
{
	size_t	dst_len;
	size_t	i;

	dst_len = 0;
	while(dst[dst_len++]);
	i = 0;
	while(src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst);
}
