#include "libft.h"

int	ft_signs(char *str, int *i)
{
	int	sign;
	int	ind;

	ind = *i;
	sign = 0;
	while (str[ind] == '+' || str[ind] == '-')
	{
		if (str[ind] == '-')
		{
			sign++;
		}
		ind++;
	}
	*i = ind;
	if (sign % 2 == 1)
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
			++i;
	sign = ft_signs((char *)str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i++] - '0';
	}
	return (res * sign);
}


#include <stdio.h>
int main(void)
{
	char *s = "  ----+--+1234b545";
	printf("%d\n", ft_atoi(s));
}

