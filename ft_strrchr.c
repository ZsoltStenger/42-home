#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	z;

	z = 0;
	while (s[z])
		z++;
	while (z >= 0)
	{
		if (s[z] == (char)c)
			return((char*)(s + z));
		i--;
	}
	return(NULL);
}
