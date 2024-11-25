# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 17:33:23 by marcnava          #+#    #+#              #
#    Updated: 2024/11/25 14:11:53 by marcnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *************************************************************************** #
#		COLORS		#

B	=			$(shell tput bold)
BLA =			$(shell tput setaf 0)
RED =			$(shell tput setaf 1)
GRE =			$(shell tput setaf 2)
YEL =			$(shell tput setaf 3)
BLU =			$(shell tput setaf 4)
MAG =			$(shell tput setaf 5)
CYA =			$(shell tput setaf 6)
WHI =			$(shell tput setaf 7)
D	=			$(shell tput sgr0)
BEL =			$(shell tput bel)
CLR =			$(shell tput el 1)

RANDOM_COLOR =	$(shell shuf -e "$(BLA)" "$(RED)" "$(GRE)" "$(YEL)" "$(BLU)" \
				"$(MAG)" "$(CYA)" "$(WHI)" -n 1)

# **************************************************************************** #
#		VARIABLES	#

NAME		=	libft.a

CC			=	cc
RM			=	rm -rf

CFLAGS		=	-Wall -Wextra -Werror

DFLAGS		=	-g3
DFLAGS		+=	-fsanitize=address

COMPILER	=	$(CC) $(CFLAGS)
LIB			=	ar rcs

MAKEFLAGS	+=	--silent

SHELL		:=	bash

# **************************************************************************** #
#		FOLDERS		#

HEADERS		=	./headers
AUX			=	./aux
FDOUT		=	./fdout
LIBC		=	./libc
CTYPE		=	./libc/ctype
LST			=	./lst
CONV		=	./conversions
PRINTF		=	./ft_printf
GNL			=	./get_next_line

# *************************************************************************** #
#		MESSAGES	#

UPDATED		=	$(NAME) up to date! No relink made ( ͡° ͜ʖ ͡°)
COMPILED	=	$(NAME) compiled successfully!
RM_OBJ		=	Removed $(OBJS)
RM_NAME		=	Removed $(NAME)

# *************************************************************************** #
#		FUNCTIONS	#

define progress_bar
				@total=$(words $(SRCS)); \
				i=0; \
				printf "["; \
				while [[ $$i -lt $$total ]]; do \
					printf " "; \
					((i = i + 1)); \
				done; \
				printf "]\r["; \
				printf "$(GRE)";
endef

ifeq ($(MAKECMDGOALS), debug)
	COMPILER	+=	$(DFLAGS)
endif

# **************************************************************************** #
#		FILES		#

SRCS 		=	$(AUX)/ft_digits_base.c			\
				$(AUX)/ft_free.c				\
				$(AUX)/ft_split.c				\
				$(AUX)/ft_striteri.c			\
				$(AUX)/ft_strjoin.c				\
				$(AUX)/ft_strmapi.c				\
				$(AUX)/ft_strtrim.c				\
				$(AUX)/ft_substr.c

SRCS		+=	$(FDOUT)/ft_putchar_fd.c		\
				$(FDOUT)/ft_putchar.c			\
				$(FDOUT)/ft_putendl_fd.c		\
				$(FDOUT)/ft_putendl.c			\
				$(FDOUT)/ft_putnbr_fd.c			\
				$(FDOUT)/ft_putnbr.c			\
				$(FDOUT)/ft_putstr_fd.c			\
				$(FDOUT)/ft_putstr.c

SRCS		+=	$(LIBC)/ft_bzero.c				\
				$(LIBC)/ft_calloc.c				\
				$(LIBC)/ft_memchr.c				\
				$(LIBC)/ft_memcmp.c				\
				$(LIBC)/ft_memcpy.c				\
				$(LIBC)/ft_memmove.c			\
				$(LIBC)/ft_memset.c				\
				$(LIBC)/ft_strchr.c				\
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

SRCS		+=	$(CONV)/ft_atoi.c				\
				$(CONV)/ft_atol.c				\
				$(CONV)/ft_atos.c				\
				$(CONV)/ft_itoa.c				\
				$(CONV)/ft_ltoa.c				\
				$(CONV)/ft_stoa.c				\
				$(CONV)/ft_uitoa.c				\
				$(CONV)/ft_ultoa.c				\
				$(CONV)/ft_ustoa.c

SRCS		+=	$(PRINTF)/ft_conversion_utils.c	\
				$(PRINTF)/ft_mod_printf.c		\
				$(PRINTF)/ft_printf_utils.c		\
				$(PRINTF)/ft_printf.c

SRCS		+=	$(GNL)/get_next_line.c

OBJS		=	$(SRCS:.c=.o)

# **************************************************************************** #
#		RULES		#

all: 			clearscreen check_up_to_date $(NAME)

$(NAME):		$(OBJS)
				@$(LIB) $(NAME) $(OBJS)

%.o:			%.c
				$(COMPILER) -I$(HEADERS) -c $< -o $@
				@printf "█"

clean:			clearscreen
				@$(RM) $(OBJS)
				@printf "$(B)$(RANDOM_COLOR)$(RM_OBJ)$(D)\n"

fclean:			clean
				@$(RM) $(NAME)
				@printf "$(B)$(RANDOM_COLOR)$(RM_NAME)$(D)\n"

re:				fclean all

.PHONY:			all clean fclean re

# *************************************************************************** #
#		CUSTOM RULES		#

debug:			$(NAME)

check_up_to_date:
				if $(MAKE) --question $(NAME); then \
					printf "$(B)$(RANDOM_COLOR)$(UPDATED)$(D)\n"; \
				else \
					$(MAKE) clearscreen; \
					$(MAKE) launch; \
					$(MAKE) $(NAME); \
					$(MAKE) clearscreen; \
					printf "$(B)$(RANDOM_COLOR)$(COMPILED)$(D)\n"; \
				fi

clearscreen:
				@clear

launch:
				$(call progress_bar)

.PHONY:			launch clearscreen check_up_to_date