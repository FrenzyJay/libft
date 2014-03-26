#include "libft.h"

int		main(int argc, char **argv)
{
	int	z;

	if (argc != 1)
		return (ft_error(argv[0]));
	z = 'z';
	ft_putchar(z);
	ft_putstr("is is the ");
	ft_putendl("beginning");
	return (0);
}
