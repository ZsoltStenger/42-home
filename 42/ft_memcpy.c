#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	z;

	if (!dst)
		return(NULL);
	z = 0;
	while (z < n)
	{
		*(char*)(dst + z) = *(char*)(src + z);
		z++;
	}
	return(dst);
}
