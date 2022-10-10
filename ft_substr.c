#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	z;
	size_t	t;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return(NULL);
	z = 0;
	t = 0;
	while (s[z])
	{
		if (z >= start && t < len)
		{
			str[t] = s[z];
			t++;
		}
		z++;
	}
	str[t] = 0;
	return(str);
}
