/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:50:15 by marcnava          #+#    #+#             */
/*   Updated: 2025/10/02 12:29:02 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPES_H
# define FT_TYPES_H

/*
** Portable integer aliases and alignment compatibility helpers.
** Use <stdint.h> when it exists; otherwise rely on native widths safely.
*/

# if defined(__has_include)
#  if __has_include("stdint.h")
#   define FT_HAS_STDINT 1
#  endif
# endif
# ifndef FT_HAS_STDINT
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#   if !defined(__STDC_NO_STDINT__)
#    define FT_HAS_STDINT 1
#   endif
#  endif
# endif

# ifdef FT_HAS_STDINT
#  include <stdint.h>
# endif

# ifdef FT_HAS_STDINT

typedef int8_t			t_i8;
typedef uint8_t			t_u8;
typedef int16_t			t_i16;
typedef uint16_t		t_u16;
typedef int32_t			t_i32;
typedef uint32_t		t_u32;
typedef int64_t			t_i64;
typedef uint64_t		t_u64;

# else

typedef signed char		t_i8;
typedef unsigned char	t_u8;
typedef short			t_i16;
typedef unsigned short	t_u16;
typedef int				t_i32;
typedef unsigned int	t_u32;
typedef long			t_i64;
typedef unsigned long	t_u64;

# endif

/*
** Alignment helpers.
** FT_CAN_ALIGNAS is 1 when an explicit alignment specifier is available.
** FT_ALIGNAS names the keyword to apply; guard its usage with FT_CAN_ALIGNAS.
** FT_ALIGNOF names the best alignment query accepted by the compiler.
*/

# if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#  define FT_CAN_ALIGNAS 1
#  define FT_HAS_ALIGNOF 1
#  define FT_ALIGNAS _Alignas
#  define FT_ALIGNOF _Alignof
# elif defined(_MSC_VER)
#  define FT_CAN_ALIGNAS 1
#  define FT_HAS_ALIGNOF 1
#  define FT_ALIGNAS __declspec
#  define FT_ALIGNOF __alignof
# elif defined(__GNUC__) || defined(__clang__)
#  define FT_CAN_ALIGNAS 1
#  define FT_HAS_ALIGNOF 1
#  define FT_ALIGNAS __attribute__
#  define FT_ALIGNOF __alignof__
# else
#  define FT_CAN_ALIGNAS 0
#  define FT_HAS_ALIGNOF 0
# endif

# if FT_CAN_ALIGNAS == 0
#  define FT_ALIGNAS
# endif

/*
** Example guarded usage:
** #if FT_CAN_ALIGNAS
** FT_ALIGNAS(align(16)) t_ft_u32 g_buffer[4];
** #else
** t_ft_u32 g_buffer[4];
** #endif
*/

#endif
