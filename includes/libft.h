/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 18:34:08 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/27 16:39:55 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

/*
** IO
*/
int				ft_putendl(const char *str);
int				ft_putstr(const char *str);
int				ft_putchar(const int c);
int				ft_putnbr(int n);
int				ft_printf(const char *format, ...)
				__attribute__((format(printf, 1, 2)));
int				ft_error(const char *msg, const char *bin);
char			*ft_putnstr(const char *str, size_t n);

/*
** STRINGS
*/
char			*ft_strdup(char *dest);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
size_t			ft_strlen(char const *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strjoin(char const *str, char const *str2);
char			*ft_strcpy(char *s1, const char *s2);
char			*ft_strncpy(char *s1, const char *s2, unsigned long n);
unsigned long	ft_strlenc(const char *str, char c);
char			*ft_strsub(char const *s, unsigned long start, unsigned long n);
char			*ft_strncat(char *s1, const char *s2, unsigned long n);
int				ft_strcountc(char const *str, char c);
int				ft_findc(const char *str, char c);
char			*ft_itoa(int n);
char			**ft_strsplit(const char *str, char c);
int				ft_strequ(const char *str1, const char *str2);

/*
** MEMORY
*/
void			ft_bzero(void *s, size_t len);
void			*ft_memset(void *b, int c, unsigned long len);
void			*ft_memalloc(unsigned long size);
void			ft_memdel(void **ap);

/*
** CHECKS
*/
int		ft_isprint(int c);

#endif /* !LIBFT_H */

