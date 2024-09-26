# *************************************************************************** #
#		MESSAGES  #
# define TITLE
# __/\\\\\\___________/\\\_______________/\\\\\_______________        
#  _\////\\\__________\/\\\_____________/\\\///________________       
#   ____\/\\\_____/\\\_\/\\\____________/\\\__________/\\\______      
#    ____\/\\\____\///__\/\\\_________/\\\\\\\\\____/\\\\\\\\\\\_     
#     ____\/\\\_____/\\\_\/\\\\\\\\\__\////\\\//____\////\\\////__    
#      ____\/\\\____\/\\\_\/\\\////\\\____\/\\\_________\/\\\______   
#       ____\/\\\____\/\\\_\/\\\__\/\\\____\/\\\_________\/\\\_/\\__  
#        __/\\\\\\\\\_\/\\\_\/\\\\\\\\\_____\/\\\_________\//\\\\\___ 
#         _\/////////__\///__\/////////______\///___________\/////____
# endef

NAME =			libft.a

CC =			gcc
RM =			rm -rf

CFLAGS =		-Wall -Wextra -Werror
CFLAGS +=		-g3
CFLAGS +=		-fsanitize=address

MAKEFLAGS +=	--silent

SHELL :=		bash

B =				$(shell tput bold)
BLA =			$(shell tput setaf 0)
RED =			$(shell tput setaf 1)
GRE =			$(shell tput setaf 2)
YEL =			$(shell tput setaf 3)
BLU =			$(shell tput setaf 4)
MAG =			$(shell tput setaf 5)
CYA =			$(shell tput setaf 6)
WHI =			$(shell tput setaf 7)
D =				$(shell tput sgr0)
BEL =			$(shell tput bel)
CLR =			$(shell tput el 1)

RANDOM_COLOR =	$(shell shuf -e "$(BLA)" "$(RED)" "$(GRE)" "$(YEL)" "$(BLU)" \
				"$(MAG)" "$(CYA)" "$(WHI)" -n 1)

# *************************************************************************** #
#	  PATHS   #

OBJSPATH =		./build/
SRCSPATH =		./

# *************************************************************************** #

SRCS =			\
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

SRCS_BONUS =	\
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJS =			$(SRCS:%.c=$(OBJSPATH)%.o)
OBJS_BONUS =	$(SRCS_BONUS:%.c=$(OBJSPATH)%.o)

# *************************************************************************** #

define progress_bar
				@i=0
				@while [[ $$i -le $(words $(SRCS)) ]] ; do \
						printf " " ; \
						((i = i + 1)) ; \
				done
				@printf "$(B)]\r[$(RANDOM_COLOR)"
endef

# *************************************************************************** #
#       RULES   #

all: 			clearscreen check_up_to_date $(NAME)

check_up_to_date:
				@echo "$$TITLE"; \
				if $(MAKE) --question $(NAME); then \
					printf "$(B)$(RANDOM_COLOR)$(NAME) up to date! No relink made ( ͡° ͜ʖ ͡°)$(D)\n"; \
				else \
					$(MAKE) clearscreen; \
					$(MAKE) launch; \
					$(MAKE) $(NAME); \
					$(MAKE) clearscreen; \
					printf "$(B)$(RANDOM_COLOR)$(NAME) compiled successfully !$(D)\n"; \
				fi

launch:
				$(call progress_bar)

$(NAME):		$(OBJS)
				@ar rc $(NAME) $(OBJS)
				@ranlib $(NAME)

$(OBJSPATH)%.o:	%.c | $(OBJSPATH)
				$(CC) $(CFLAGS) -c $< -o $@
				@printf "█"

$(OBJSPATH):
				@mkdir -p $(dir $@) # 2> /dev/null || true

clearscreen:
				@clear

bonus:			.bonus

.bonus:			launch $(OBJS_BONUS)
				@ar rc $(NAME) $(OBJS_BONUS)
				@ranlib $(NAME)
				@touch .bonus
				@printf "\n$(B)$(RANDOM_COLOR)$(NAME) compiled successfully !$(D)\n"

clean:			clearscreen
				@$(RM) $(OBJSPATH)
				$(RM) .bonus
				@printf "$(B)$(RANDOM_COLOR)Removed $(OBJSPATH)$(D)\n"

fclean:			clean
				@$(RM) $(NAME)
				@printf "$(B)$(RANDOM_COLOR)Removed $(NAME)$(D)\n"

re:				fclean all

.PHONY:			all clean fclean re launch bonus clearscreen check_up_to_date