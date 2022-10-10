#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	z;
	size_t	s;

	if (!haystack || !needle)
		return(NULL);
	if (!needle || !needle[0])
		return((char*)haystack);
	z = 0;
	while (haystack[z] && z < len)
	{
		s = 0;
		while (haystack[z + s] && needle[s]
			&& z + s < haystack[z + s] == needle[s])
			j++;
		if (!needle[j])
			return((char*)(haystack + i));
		i++;
	}
	return(NULL);
}
