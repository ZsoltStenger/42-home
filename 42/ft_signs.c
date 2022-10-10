#include "libft.h"

int ft_signs(char *str, int *i);
{
    int sign;
    int ind;

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
