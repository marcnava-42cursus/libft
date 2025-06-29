/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:22:04 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/29 21:19:01 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of words in a string, separated by a given
 *        delimiter.
 * 
 * @param s The input string to be analyzed.
 * @param c The delimiter character used to separate words.
 * @return The number of words found in `s`, or 0 if `s` is NULL.
 * 
 * @details
 * This function iterates through the string `s`, counting the number of words 
 * delimited by the character `c`. A word is defined as a sequence of non-`c` 
 * characters surrounded by `c` or the beginning/end of the string.
 * 
 * - It skips leading delimiters before counting a word.
 * - It increments the word count when a valid word is found.
 * - It skips to the next delimiter before continuing the loop.
 * 
 * @note Consecutive delimiters are ignored, meaning empty words are not
 *       counted.
 * @warning If `s` is NULL, the function returns `(size_t)NULL`, which is an
 *          incorrect 
 *          behavior since `(size_t)NULL` is not a valid size. It should return
 *          `0` instead.
 */
static size_t	ft_count_words(const char *s, char c)
{
	size_t	words;

	if (!s)
		return (0);
	words = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

/**
 * @brief Splits a string into an array of words based on a given delimiter.
 * 
 * @param s The input string to be split.
 * @param c The delimiter character used to separate words.
 * @return A dynamically allocated array of strings (`char **`), or NULL if
 *         allocation fails.
 * 
 * @details
 * This function breaks the string `s` into separate words, using `c` as the
 * delimiter. 
 * It dynamically allocates memory for an array of strings, where each element
 * contains a single word from `s`. The resulting array is null-terminated.
 * 
 * - It first determines the number of words using `ft_count_words`.
 * - It then allocates memory for the array and each individual word using
 *   `ft_substr`.
 * - If memory allocation fails, it frees any allocated memory before returning
 *   `NULL`.
 * 
 * @note The function ignores consecutive delimiters and does not create empty
 *       strings.
 * @warning The caller is responsible for freeing the returned array using
 *          `ft_free_matrix`.
 */
char	**ft_split(const char *s, char c)
{
	char	**s_split;
	size_t	row;
	size_t	len;

	if (!s)
		return (NULL);
	s_split = (char **)ft_calloc((ft_count_words(s, c) + 1), sizeof(*s_split));
	if (!s_split)
		return (NULL);
	row = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = 0;
		while (s[len] != c && s[len])
			len++;
		if (len)
			s_split[row] = ft_substr(s, 0, len);
		if (len && !s_split[row++])
			return (ft_free_matrix((void **)s_split), NULL);
		s += len;
	}
	s_split[row] = NULL;
	return (s_split);
}
