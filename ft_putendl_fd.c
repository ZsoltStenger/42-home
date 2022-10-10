#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	const char	nl = '\n';

	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}

#include <stdio.h>
size_t ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return(len);
}
int main(void)
{
	char s[] = "new line after me please";
	ft_putendl_fd(s, 2);
	return(0);
}