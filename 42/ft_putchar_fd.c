#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}


#include <stdio.h>
int main(void)
{
    ft_putchar_fd('@', 2);
    printf("\n");
    return(0);
}
