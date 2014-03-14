#include <unistd.h>

int		ft_putchar(const int c)
{
	write(1, &c, 1);
	return (1);
}
