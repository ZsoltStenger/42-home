#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	z;

	if (!dst || !src)
		return(NULL);
	z = 0;
	while (z < n)
	{
		*(unsigned char*)(dst + z) = *(unsigned char*)(src + z);
		if (*(unsigned char*)(src + z) == (unsigned char)c)
			return(dst + z + 1);
		z++;	
	}
	return(NULL);
}
