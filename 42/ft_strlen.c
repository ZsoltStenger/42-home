#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return(len);
}

/*
#include <stdio.h>

int main(void)
{
	char s[] = "coder";

	printf("Length of the string is: %d", ft_strlen(s));

	return(0);
}
*/