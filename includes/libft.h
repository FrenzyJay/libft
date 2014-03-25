#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

/*
** PUTS
*/
int		ft_putendl(const char *str);
int		ft_putstr(const char *str);
int		ft_putchar(const int c);
int		ft_putnbr(int n);
int		ft_error(const char *str);

/*
** STRINGS
*/
char	*ft_strdup(char *dest);
char	*ft_strnew(size_t size);
char	*ft_strncpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(char const *str);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strjoin(char const *str, char const *str2);
void	ft_strdel(char **as);

/*
** MEMORY
*/
void	ft_bzero(void *s, size_t len);

/*
** CHECKS
*/
int		ft_isprint(int c);
#endif /* !LIBFT_H */
