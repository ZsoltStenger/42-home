#include "libft.h"

void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	z;

	z = 0;
	while (z < n)
	{
		if (*(unsigned char*)(s1 + z) != *(unsigned char*)(s2 + z))
			return(*(unsigned char*)(s1 + z) - *(unsigned char*)(s2 + z));
		z++;
	}
	return(0);
}
