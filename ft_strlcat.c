#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	z;
	size_t	s;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	s = dst_len;
	z = 0;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[z] && dst_len + z < size - 1)
		{
			dst[s] = src[z];
			s++;
			z++;
		}
		dst[s] = 0;
	}
	if (dst_len >= size)
		dst_len = size;
	return(dst_len + src_len);
}
