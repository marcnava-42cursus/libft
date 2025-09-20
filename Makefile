# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 17:33:23 by marcnava          #+#    #+#              #
#    Updated: 2025/07/30 16:27:04 by marcnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#		VARIABLES	#

NAME		:=	libft.a

CC			:=	cc
RM			:=	rm -rf

CFLAGS		:=	-Wall -Wextra -Werror

COMPILER	:=	$(CC) $(CFLAGS)
LIB			:=	ar rcs

# **************************************************************************** #
#		FOLDERS		#

SRCPATH		:=	./src
BUILD		:=	./build
INCLUDES	:=	./includes

AUX			:=	$(SRCPATH)/aux
CONV		:=	$(SRCPATH)/conversions
FDOUT		:=	$(SRCPATH)/fdout
PRINTF		:=	$(SRCPATH)/ft_printf
GNL			:=	$(SRCPATH)/get_next_line
LIBC		:=	$(SRCPATH)/libc
CTYPE		:=	$(SRCPATH)/libc/ctype
LST			:=	$(SRCPATH)/lst
MATH		:=	$(SRCPATH)/math

# **************************************************************************** #
#		FILES		#

SRCS 		:=	$(AUX)/ft_digits_base.c			\
				$(AUX)/ft_free_matrix.c			\
				$(AUX)/ft_free_matrixes.c		\
				$(AUX)/ft_free.c				\
				$(AUX)/ft_ftinit.c				\
				$(AUX)/ft_split.c				\
				$(AUX)/ft_striteri.c			\
				$(AUX)/ft_strjoin.c				\
				$(AUX)/ft_strmapi.c				\
				$(AUX)/ft_strtrim.c				\
				$(AUX)/ft_substr.c

SRCS		+=	$(CONV)/ft_atoi.c				\
				$(CONV)/ft_atol.c				\
				$(CONV)/ft_atos.c				\
				$(CONV)/ft_itoa.c				\
				$(CONV)/ft_ltoa.c				\
				$(CONV)/ft_stoa.c				\
				$(CONV)/ft_uitoa.c				\
				$(CONV)/ft_ultoa.c				\
				$(CONV)/ft_ustoa.c

SRCS		+=	$(FDOUT)/ft_putchar.c			\
				$(FDOUT)/ft_putendl.c			\
				$(FDOUT)/ft_puterror.c			\
				$(FDOUT)/ft_putnbr.c			\
				$(FDOUT)/ft_putstr.c

SRCS		+=	$(PRINTF)/ft_conversion_utils.c	\
				$(PRINTF)/ft_mod_printf.c		\
				$(PRINTF)/ft_printf_utils.c		\
				$(PRINTF)/ft_printf.c

SRCS		+=	$(GNL)/get_next_line_utils.c	\
				$(GNL)/get_next_line.c

SRCS		+=	$(LIBC)/ft_bzero.c				\
				$(LIBC)/ft_calloc.c				\
				$(LIBC)/ft_memchr.c				\
				$(LIBC)/ft_memcmp.c				\
				$(LIBC)/ft_memcpy.c				\
				$(LIBC)/ft_memmove.c			\
				$(LIBC)/ft_memset.c				\
				$(LIBC)/ft_strchr.c				\
				$(LIBC)/ft_strcmp.c				\
				$(LIBC)/ft_strdup.c				\
				$(LIBC)/ft_strlcat.c			\
				$(LIBC)/ft_strlcpy.c			\
				$(LIBC)/ft_strlen.c				\
				$(LIBC)/ft_strncmp.c			\
				$(LIBC)/ft_strnstr.c			\
				$(LIBC)/ft_strrchr.c

SRCS		+=	$(CTYPE)/ft_isalnum.c			\
				$(CTYPE)/ft_isalpha.c			\
				$(CTYPE)/ft_isascii.c			\
				$(CTYPE)/ft_isblank.c			\
				$(CTYPE)/ft_iscntrl.c			\
				$(CTYPE)/ft_isdigit.c			\
				$(CTYPE)/ft_isgraph.c			\
				$(CTYPE)/ft_islower.c			\
				$(CTYPE)/ft_isprint.c			\
				$(CTYPE)/ft_ispunct.c			\
				$(CTYPE)/ft_isspace.c			\
				$(CTYPE)/ft_isupper.c			\
				$(CTYPE)/ft_isxdigit.c			\
				$(CTYPE)/ft_toascii.c			\
				$(CTYPE)/ft_tolower.c			\
				$(CTYPE)/ft_toupper.c

SRCS		+=	$(LST)/ft_lstadd_back.c			\
				$(LST)/ft_lstadd_front.c		\
				$(LST)/ft_lstclear.c			\
				$(LST)/ft_lstdelone.c			\
				$(LST)/ft_lstiter.c				\
				$(LST)/ft_lstlast.c				\
				$(LST)/ft_lstmap.c				\
				$(LST)/ft_lstnew.c				\
				$(LST)/ft_lstsize.c

SRCS		+=	$(MATH)/ft_abs.c				\
				$(MATH)/ft_avg.c				\
				$(MATH)/ft_fact.c				\
				$(MATH)/ft_log10.c				\
				$(MATH)/ft_logn.c				\
				$(MATH)/ft_pow2.c				\
				$(MATH)/ft_pown.c				\
				$(MATH)/ft_sum.c				\

OBJS		:=	$(SRCS:$(SRCPATH)/%.c=$(BUILD)/%.o)

# **************************************************************************** #
#		RULES		#

all: 			$(NAME)
.PHONY:			all

$(NAME):		$(OBJS)
				$(LIB) $(NAME) $(OBJS)

$(BUILD)/%.o:	$(SRCPATH)/%.c
				mkdir -p $(@D)
				$(COMPILER) -I$(INCLUDES) -c $< -o $@

clean:
				$(RM) $(BUILD)
.PHONY:			clean

fclean:			clean
				$(RM) $(NAME)
.PHONY:			fclean

re:				fclean all
.PHONY:			re
