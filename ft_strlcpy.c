#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	z;

	z = 0;
	if (size > 0)
	{
		while (src[z] && z < (size - 1))
		{
			dst[z] = src[z];
			z++;
		}
		dst[z] = 0;
	}
	while (src[z])
		z++;
	return(z);
}
