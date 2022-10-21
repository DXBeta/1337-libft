/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:15:36 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/21 21:34:01 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
int			ft_strncmp(char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *s1, const char *s2, size_t len);
char		*ft_strchr(const char *str, int x);
char		*ft_strdup(char *src);
char		*ft_strjoin(char const *string1, char const *string2);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strrchr(const char *str, int x);
char		*ft_itoa(int n);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strtrim(char const *s1, char const *set);
void		*ft_memset(void *str, int x, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *s, int x, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		ft_bzero(void *dst, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int num, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
int			ft_atoi(const char *str);
int			ft_toupper(int x);
int			ft_isalpha(int x);
int			ft_isascii(int x);
int			ft_tolower(int x);
int			ft_isdigit(int x);
int			ft_isalnum(int x);
int			ft_isprint(int x);
#endif
