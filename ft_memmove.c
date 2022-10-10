#include "libft.g"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	z;

	if (!dst || !src)
		return(NULL);
	if (dst > src)
	{
		z = (int)len - 1;
		while (z >= 0)
		{
			*(char*)(dst + z) = *(char*)(src + z);
			z--;
		}
	}
	else
	{
		z = 0;
		while (z < (int)len)
		{
			*(char*)(dst + z) = *(char*)(src +z);
			z++;
		}
	}
	return(dst);
}
