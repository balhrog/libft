#include "libft.h"

void	*memset(void *b, int c, size_t n)
{
	char	*bloc;

	if (n > 0)
	{
		d = b;
		while (n)
		{
			*d++ = c;
			n--;
		}
	}
	return (b);
}
