/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:06 by marcnava          #+#    #+#             */
/*   Updated: 2025/01/24 16:02:57 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* INCLUDES  */

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>

# include "get_next_line.h"
# include "ft_printf.h"

/* FUNCTIONS  */
/* aux  */

size_t	ft_count_digits(int n, int base_len);
void	ft_free_matrix(void **matrix);
void	ft_free(void **ptr);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* conversions  */

int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);
short	ft_atos(const char *nptr);
char	*ft_itoa_base(int n, const char *base);
char	*ft_itoa_o(int n);
char	*ft_itoa_x(int n);
char	*ft_itoa(int n);
char	*ft_ltoa_base(long n, const char *base);
char	*ft_ltoa_o(long n);
char	*ft_ltoa_x(long n);
char	*ft_ltoa(long n);
char	*ft_stoa_base(short n, const char *base);
char	*ft_stoa_o(short n);
char	*ft_stoa_x(short n);
char	*ft_stoa(short n);
char	*ft_uitoa_base(unsigned int n, const char *base);
char	*ft_uitoa_o(unsigned int n);
char	*ft_uitoa_x(unsigned int n);
char	*ft_uitoa(unsigned int n);
char	*ft_ultoa_base(unsigned long n, const char *base);
char	*ft_ultoa_o(unsigned long n);
char	*ft_ultoa_x(unsigned long n);
char	*ft_ultoa(unsigned long n);
char	*ft_ustoa_base(unsigned short n, const char *base);
char	*ft_ustoa_o(unsigned short n);
char	*ft_ustoa_x(unsigned short n);
char	*ft_ustoa(unsigned short n);

/* outputs  */

void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char *s, int fd);
void	ft_putendl(char *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstr(char *s);

/* ctype  */

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_toascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* libc  */

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);

/* lists  */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

#endif