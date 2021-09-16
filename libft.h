/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:04:01 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/09/15 22:04:10 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>
#include <stdlib.h>

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int    	ft_isalnum(int    c);
int    	ft_isalpha(int    c);
int		ft_isascii(int c);
int    	ft_isdigit(char    c);
int    	ft_isprint(int    c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t lenght);
void	*ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void    *s, int    c, size_t    n);
char    *ft_strchr(const char *string, int c);
char 	*ft_strdup(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t 	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t 	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *string, int c);
int    	ft_tolower(int    c);
int    	ft_toupper(int    c);
int    	ft_itoa(int    c);
int    	ft_putchar_fd(int    c);
int    	ft_putendl_fd(int    c);
int    	ft_putnbr_fd(int    c);
int    	ft_putstr_fd(int    c);
char 	**ft_split(char const *s, char c);
int    	ft_striteri(int    c);
char	*ft_strjoin(char const *s1, char const *s2);
int    	ft_strmapi(int    c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif