/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 18:34:08 by jvincent          #+#    #+#             */
/*   Updated: 2014/03/26 22:54:48 by garm             ###   ########.fr       */
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
int				ft_error(const char *str);

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
char			**ft_strsplit(const char *str, char c);

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

