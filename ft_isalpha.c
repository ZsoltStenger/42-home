#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return(1);
	return(0);
}

#include <stdio.h>
int main(void)
{
	char ch = 'a';
	printf("%d\n", ft_isalpha(ch));
	char hc = '5';
	printf("%d\n", ft_isalpha(hc));
	char hcc = 'A';
	printf("%d\n", ft_isalpha(hcc));
	//printf("\n");
}