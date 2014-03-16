#ifndef LIBFT_H
# define LIBFT_H

/*
** PUTS
*/
int				ft_putendl(const char *str);
int				ft_putstr(const char *str);
int				ft_putchar(const int c);
int				ft_error(const char *str);

/*
** STRINGS
*/
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);
unsigned long	ft_strlen(const char *str);

#endif /* !LIBFT_H */
