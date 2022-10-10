#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return(1);
	return(0);
}


#include <stdio.h>
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return(1);
	return(0);
}
int main(void)
{
	char nm = '1';
	printf("%d\n", ft_isalnum(nm));
	char hc = '\n';
	printf("%d\n", ft_isalnum(hc));
	char mythic = 'A';
	printf("%d\n", ft_isalnum(mythic));
	//printf("\n");
}