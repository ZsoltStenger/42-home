#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	z;
	int	s;

	z = 0;
	s = 0;
	if (needle[s] == '\0')
		return(char *)haystack;
	while (haystack[z] != '\0')
	{
		while (haystack[z + s] == needle[s] && haystack[z + s] != '\0')
			s++;
		if (needle[s] == '\0')
			return((char*)haystack + z);
		z++;
		s = 0;
	}
	return(0);
}

/*
#include <stdio.h>
int main()
{
	char haystack[] = "Hozz egy kilo hurkat, de ne vereset! Denevereset?!";
	char needle[] = "de";
	printf("%s\n", ft_strstr(haystack, needle));

	return(0);
}
*/
