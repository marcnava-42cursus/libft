# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 17:33:23 by marcnava          #+#    #+#              #
#    Updated: 2024/10/07 18:14:42 by marcnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *************************************************************************** #
#		VARIABLES	#

NAME		=	libft.a

CC			=	cc
RM			=	rm -rf

CFLAGS		=	-Wall -Wextra -Werror

COMPILER	=	$(CC) $(CFLAGS)
LIB			=	ar rcs

HEADER		=	libft.h

# *************************************************************************** #
#		FILES		#

SRCS 		=	\
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

SRCS_B		=	\
				ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

OBJS		=	$(SRCS:.c=.o)
OBJS_B		=	$(SRCS_B:.c=.o)

# *************************************************************************** #
#		RULES		#

all: 			$(NAME)

$(NAME):		$(OBJS)
				$(LIB) $(NAME) $(OBJS)

.o:				.c $(HEADER)
				$(COMPILER) -c $< -o $@

clean:
				$(RM) $(OBJS) $(OBJS_B)
				$(RM) .bonus

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

bonus:			$(OBJS_B)
				$(LIB) $(NAME) $(OBJS_B)

.PHONY:			all clean fclean re bonus