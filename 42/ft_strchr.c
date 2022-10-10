#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	z;

	if (!s)
		return(NULL);
	z = 0;
	while (s[z])
	{
		if (s[z] == (char)c)
			return((char*)(s + z));
		z++;
	}
	if (s[z] == (char)c)
		return((char*)(s + z));
	return(NULL);
}
