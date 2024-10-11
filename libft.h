/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:06 by marcnava          #+#    #+#             */
/*   Updated: 2024/10/06 14:38:31 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

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

/* Creates a new string that is the result
of the concatenation of 's1' and 's2'. */
char	*ft_strjoin(char const *s1, char const *s2);

/* Creates a new string with the characters of 's' that are in 'set'
removed from the beginning and the end. */
char	*ft_strtrim(char const *s1, char const *set);

/* Creates an array of strings obtained by splitting 's'
using 'c' as a delimiter. */
char	**ft_split(char const *s, char c);

/* Creates a new string with the result of applying 'f'
to each character of 's'. */
char	*ft_itoa(int n);

/* Applies the function 'f' to each character of the string 's'
to create a new string. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* Applies 'f' to each char of 's', passing char's index and pointer. */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Allocates (with malloc(3)) and returns a new element. */
void	ft_putchar_fd(char c, int fd);

/* Outputs the string 's' to the given file descriptor. */
void	ft_putstr_fd(char *s, int fd);

/* Outputs the string 's' to the given file descriptor,
followed by a newline. */
void	ft_putendl_fd(char *s, int fd);

/* Outputs the integer 'n' to the given file descriptor. */
void	ft_putnbr_fd(int n, int fd);

/* BONUS PART */
/* Structure for linked list */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* Allocates and returns a new element.
The variable 'content' is initialized with the value
of the parameter 'content'. */
t_list	*ft_lstnew(void *content);

/* Adds the element 'new' at the beginning of the list. */
void	ft_lstadd_front(t_list **lst, t_list *new);

/* Counts the number of elements in a list. */
int		ft_lstsize(t_list *lst);

/* Returns the last element of the list. */
t_list	*ft_lstlast(t_list *lst);

/* Adds the element 'new' at the end of the list. */
void	ft_lstadd_back(t_list **lst, t_list *new);

/* Takes as a parameter an element and frees the memory
of the element's content using the function 'del' given as a parameter
and free the element. */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/* Deletes and frees the given element and every successor of that element,
using the function 'del' and free. */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/* Iterates the list 'lst' and applies the function 'f'
to the content of each element. */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/* Iterates the list 'lst' and applies the function 'f'
to the content of each element. */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif