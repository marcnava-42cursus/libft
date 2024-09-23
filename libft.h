/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:06 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/23 17:47:03 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

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

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	strlcat(char *dst, const char *src, size_t size);

/* Convert lowercase to uppercase */
int		ft_toupper(int c);

/* Convert uppercase to lowercase */
int		ft_tolower(int c);

#endif