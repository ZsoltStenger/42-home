#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}


#include <stdio.h>
int main(void)
{
	char ch = '5';
	printf("%d\n", ft_isdigit(ch));
	char hc = 'a';
	printf("%d\n", ft_isdigit(hc));
	//printf("\n");
}