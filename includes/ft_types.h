/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:50:15 by marcnava          #+#    #+#             */
/*   Updated: 2025/10/02 12:41:35 by marcnava         ###   ########.fr       */
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

typedef int8_t			t_char;
typedef uint8_t			t_uchar;
typedef int16_t			t_short;
typedef uint16_t		t_ushort;
typedef int32_t			t_int;
typedef uint32_t		t_uint;
typedef int64_t			t_long;
typedef uint64_t		t_ulong;

# else

typedef signed char		t_char;
typedef unsigned char	t_uchar;
typedef short			t_short;
typedef unsigned short	t_ushort;
typedef int				t_int2;
typedef unsigned int	t_uint;
typedef long			t_long;
typedef unsigned long	t_ulong;

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
