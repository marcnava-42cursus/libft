/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:12:08 by marcnava          #+#    #+#             */
/*   Updated: 2025/09/20 23:41:32 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_AUX_H
# define FT_AUX_H

# include <stddef.h>
# include <stdarg.h>

size_t	ft_count_digits(int n, int base_len);
void	ft_free_matrix(void **matrix);
void	ft_free_matrixes(void **first, ...);
void	ft_free(void **ptr);
void	ft_ftinit(int count, ...);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
