#include "libft.h"

char	*strdup(const char *s)
{
	size_t		len;
	size_t		i;
	char		*str;

	len = 0;
	while(s[len++]);
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while(s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
