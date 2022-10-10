#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 32 && c < 126)
		return(1);
	return(0);
}

#include <stdio.h>
int main(void)
{
	char ch = '5';
	printf("%d\n", ft_isprint(ch));
	char hc = '\n';
	printf("%d\n", ft_isprint(hc));
	//printf("\n");
}