#include <unistd.h>
#include "libft.h"

int		ft_putendl(const char *str)
{
	return (ft_putstr(str) + write(1, "\n", 1));
}
