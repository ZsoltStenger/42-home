#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	z;

	if (!b)
		return(NULL);
	z = 0;
	while (z < len)
	{
		*(unsigned char*)(b + z) = (unsigned char)c;
		i++;
	}
	return(b);
}
