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
char			*ft_strdup(const char *src);
char			*ft_strcpy(char *s1, const char *s2);
char			*ft_strncpy(char *s1, const char *s2, unsigned long n);
char			*ft_strnew(unsigned long size);
void			ft_strdel(char **as);
unsigned long	ft_strlenc(const char *str, char c);
char			*ft_strsub(char const *s, unsigned long start, unsigned long n);
char			*ft_strncat(char *s1, const char *s2, unsigned long n);
int				ft_strcountc(char const *str, char c);

/*
** MEMORY
*/
void	ft_bzero(void *s, unsigned long n);
void	*ft_memset(void *b, int c, unsigned long len);
void	*ft_memalloc(unsigned long size);
void	ft_memdel(void **ap);

#endif /* !LIBFT_H */
