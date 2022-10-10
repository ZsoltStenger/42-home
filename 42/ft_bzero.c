#include "libft.h"

void	ft_bzero(void *z, size_t s)
{
	size_t	n;

	if (!s)
		return;
	n = 0;
	while (n < s)
	{
		*(char*)(z + n) = 0;
		n++;
	}
}
