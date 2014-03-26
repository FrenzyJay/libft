#include <unistd.h>

int		ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	write(1, str, i);
	return (1);
}
