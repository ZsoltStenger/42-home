#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	z;

	if (!s)
		return(NULL);
	z = 0;
	while (z < n)
	{
		if (*(unsigned char*)(s + z) == (unsigned char)c)
			return ((void*)(s + z));
		z++;
	}
	return(NULL);
}
