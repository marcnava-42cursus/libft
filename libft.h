/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:06 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/25 10:22:06 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

/* PART 1 - FUNCTIONS OF LIBC */
/* Checks if c is alphabetic */
int		ft_isalpha(int c);

/* Checks if c is a digit */
int		ft_isdigit(int c);

/* Checks if c is alphabetic or digit */
int		ft_isalnum(int c);

/* Checks if c is ascii */
int		ft_isascii(int c);

/* Checks if c is printable */
int		ft_isprint(int c);

/* Calculates lenght of a string starting on s */
size_t	ft_strlen(const char *s);

/* Fills the first n bytes of the memory area pointed to by s
with the constant byte c. */
void	*ft_memset(void *s, int c, size_t n);

/* Erases the data in the n bytes of the memory starting at
the location pointed to by s, by writing zeros (bytes containing '\0')
to that area. */
void	ft_bzero(void *s, size_t n);

/* Copies n bytes from src to dest, areas don't overlap*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/* Copies n bytes from src to dest, areas may overlap */
void	*ft_memmove(void *dest, const void *src, size_t n);

/* Copies up to size - 1 characters from the NUL-terminated string src to dst,
NUL-terminating the result.
Returns the total length of the string it tried to create. */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/* Appends string src to the end of dst.
It will append at most size - strlen(dst) - 1 characters.
Returns the total length of the string it tried to create. */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/* Convert lowercase to uppercase */
int		ft_toupper(int c);

/* Convert uppercase to lowercase */
int		ft_tolower(int c);

/* Returns a pointer to the first occurrence of c in s */
char	*ft_strchr(const char *s, int c);

/* Returns a pointer to the last occurrence of c in s */
char	*ft_strrchr(const char *s, int c);

/* Compares two strings, compares the first n bytes */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* Find the ocurrence of c in s on the first n bytes */
void	*ft_memchr(const void *s, int c, size_t n);

/* Compares the first n bytes of s1 and s2 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* Locates the first occurrence of little in big,
searching no more than len characters */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/* Converts the initial portion of the string pointed to by nptr to int. */
int		ft_atoi(const char *nptr);

/* Allocates memory for an array of count elements of size bytes each
and returns a pointer to the allocated memory. */
void	*ft_calloc(size_t count, size_t size);

/* Duplicates the string s1. Returns a pointer to the new string,
or NULL if allocation fails. */
char	*ft_strdup(const char *s1);

/* PART 2 - ADITIONAL FUNCTIONS */
/* Creates a new string from a substring of 's' starting at 'start'
up to 'len' characters. */
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* BONUS PART */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif