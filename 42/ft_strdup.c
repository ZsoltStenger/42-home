#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	z;

	if (!s1)
		return(NULL);
	str = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return(NULL);
	z = 0;
	while (s1[z])
	{
		str[z] = s1[z];
		z++;
	}
	str[z] = 0;
	return(str);
}
