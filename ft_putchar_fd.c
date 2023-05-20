#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(void)
{
    char    c;
    int     i;

    i = 1;
    c = 'p';

    ft_putchar_fd( c, i);
    return(0);
}