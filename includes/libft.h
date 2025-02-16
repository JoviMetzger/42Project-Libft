/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:27:07 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/12 19:01:35 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>
# include <stddef.h>

// mem-functions
void			*ft_calloc(size_t count, size_t n);
void			*ft_memchr(const void *str, int ch, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *str, int ch, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);

// str-functions
char			*ft_strchr(const char *str, int n);
char			*ft_strdup(const char *str);
char			*ft_strnstr(const char *str, const char *ch, size_t n);
char			*ft_strrchr(const char *str, int n);
char			*ft_strcpy(char *s1, char *s2);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
int				ft_strcmp(char *s1, char *s2);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t			ft_strlen(char const *str);
size_t			ft_strlcpy(char *dest, char const *src, size_t n);
size_t			ft_strlcat(char *dest, const char *src, size_t n);

// put-functions -> using write() needs a fd
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

// for each int-functions
int				ft_toupper(int value);
int				ft_tolower(int value);
int				ft_isalnum(int alnum);
int				ft_isalpha(int letter);
int				ft_isascii(int value);
int				ft_isdigit(int digit);
int				ft_isprint(int value);

// converting-functions
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int 			ft_atoi_base(const char *str, int base);

// extra-functions
void			ft_bzero(void *str, size_t n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			**ft_split(char const *s, char c);

#endif
