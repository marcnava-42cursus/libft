# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 17:33:23 by marcnava          #+#    #+#              #
#    Updated: 2024/09/29 20:45:06 by marcnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *************************************************************************** #
#		VARIABLES	#

NAME		=	libft.a

CC			=	gcc
RM			=	rm -rf

CFLAGS		=	-Wall -Wextra -Werror
# Enable debug mode level 3 and address sanitizer for memory leaks
CFLAGS		+=	-g3
CFLAGS		+=	-fsanitize=address

COMPILER	=	$(CC) $(CFLAGS)
LIB			=	ar rcs

# Silent mode, doesn't print log messages
MAKEFLAGS	+=	--silent

# Change the shell to bash
SHELL		:=	bash

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

# *************************************************************************** #
#		PATHS   	#

OBJSPATH =		./build/
SRCSPATH =		./

# *************************************************************************** #
#		MESSAGES	#

UPDATED		=	$(NAME) up to date! No relink made ( ͡° ͜ʖ ͡°)
UPDATED_B	=	bonus up to date! No relink made ( ͡° ͜ʖ ͡°)
COMPILED	=	$(NAME) compiled successfully!
COMPILED_B	=	bonus compiled successfully!
RM_OBJ		=	Removed $(OBJSPATH)
RM_NAME		=	Removed $(NAME)

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
				ft_lstiter_bonus.c

OBJS		=	$(SRCS:%.c=$(OBJSPATH)%.o)
OBJS_B		=	$(SRCS_B:%.c=$(OBJSPATH)%.o)

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

define progress_bar_bonus
				@total=$(words $(SRCS_B)); \
				i=0; \
				printf "["; \
				while [[ $$i -lt $$total ]]; do \
					printf " "; \
					((i = i + 1)); \
				done; \
				printf "]\r["; \
				printf "$(YEL)";
endef

# *************************************************************************** #
#		RULES		#

all: 			clearscreen check_up_to_date $(NAME)

$(NAME):		$(OBJS)
				@$(LIB) $(NAME) $(OBJS)

$(OBJSPATH)%.o:	$(SRCSPATH)%.c | $(OBJSPATH)
				$(COMPILER) -c $< -o $@
				@printf "█"

clean:			clearscreen
				@$(RM) $(OBJSPATH)
				$(RM) .bonus
				$(MAKE) print_title
				@printf "$(B)$(RANDOM_COLOR)$(RM_OBJ)$(D)\n"

fclean:			clean
				@$(RM) $(NAME)
				@printf "$(B)$(RANDOM_COLOR)$(RM_NAME)$(D)\n"

re:				fclean all

bonus:			clearscreen check_up_to_date_bonus

.bonus:			launch_bonus $(OBJS_B)
				@$(LIB) $(NAME) $(OBJS_B)
				@touch .bonus
				@printf "\n$(B)$(RANDOM_COLOR)$(COMPILED)$(D)\n"

.PHONY:			all clean fclean re bonus

# *************************************************************************** #
#		CUSTOM RULES		#

check_up_to_date:
				if $(MAKE) --question $(NAME); then \
					$(MAKE) print_title; \
					printf "$(B)$(RANDOM_COLOR)$(UPDATED)$(D)\n"; \
				else \
					$(MAKE) clearscreen; \
					$(MAKE) launch; \
					$(MAKE) $(NAME); \
					$(MAKE) clearscreen; \
					$(MAKE) print_title; \
					printf "$(B)$(RANDOM_COLOR)$(COMPILED)$(D)\n"; \
				fi

check_up_to_date_bonus:
				if [ -f .bonus ]; then \
					$(MAKE) print_title; \
					printf "$(B)$(RANDOM_COLOR)$(UPDATED_B)$(D)\n"; \
				else \
					$(MAKE) clearscreen; \
					$(MAKE) launch_bonus; \
					$(MAKE) .bonus; \
					$(MAKE) clearscreen; \
					$(MAKE) print_title; \
					printf "$(B)$(RANDOM_COLOR)$(COMPILED_B)$(D)\n"; \
				fi

$(OBJSPATH):
				@mkdir -p $(dir $@) # 2> /dev/null || true

clearscreen:
				@clear

print_title:
				@printf "%s\n" \
				"$(B)$(GRE)" \
				" __    __    ______    __  __    ______    ______   __    __        ______    " \
				"/\ \"-./  \  /\  __ \  /\ \/ /   /\  ___\  /\  ___\ /\ \  /\ \      /\  ___\  " \
				"\ \ \-./\ \ \ \  __ \ \ \  _\"-. \ \  __\  \ \  __\ \ \ \ \ \ \____ \ \  __\  " \
				" \ \_\ \ \_\ \ \_\ \_\ \ \_\ \_\ \ \_____\ \ \_\    \ \_\ \ \_____\ \ \_____\ " \
				"  \/_/  \/_/  \/_/\/_/  \/_/\/_/  \/_____/  \/_/     \/_/  \/_____/  \/_____/ " \
				"$(D)"

launch:
				$(MAKE) print_title
				$(call progress_bar)

launch_bonus:
				$(MAKE) print_title
				$(call progress_bar_bonus)

.PHONY:			launch launch_bonus clearscreen check_up_to_date check_up_to_date_bonus