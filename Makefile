
SRCS	= \ ft_printf.c

BONUS_SRCS = \

NAME	= libftprintf.a

LIBS	= libft.h

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

OBJS	= 	$(patsubst %.c, %.o, $(SRCS))

BONUS_OBJS	= $(patsubst %.c, %.o, $(BONUS_SRCS))

all:		$(NAME)

$(NAME): 	$(OBJS)
			./libft/make
			@echo "$(BLUE)ft_printf is done!$(NO_COLOR)"
			@ar rc libft.a $(OBJS)

bonus:		$(BONUS_OBJS) $(OBJS)
			@echo "$(LIGHT_GREEN)Bonuses are made!$(NO_COLOR)"
			@ar rc libft.a $(BONUS_OBJS) $(OBJS)

%.o:		%.c Makefile
			@echo "$(LIGHT_PURPLE)Compiling: $@ $(NO_COLOR)"
			@$(CC) $(CFLAGS) -c $<

clean:
			@rm -rf $(OBJS) $(BONUS_OBJS)
			@echo "$(RED)Object files deleted.$(NO_COLOR)" 

fclean: 	clean
			@rm -rf $(NAME)
			@echo "$(RED)$(NAME) deleted.$(NO_COLOR)"

re: 		fclean all

.PHONY:	all bonus clean fclean re

UNDER_LINE	= \033[4m
BOULD	 	= \033[1m

################
##   COLORS   ##
################

NO_COLOR 	= \033[0m
BLACK	 	= \033[0;30m
RED 	 	= \033[0;31m
GREEN 	 	= \033[0;32m
BROWN 	 	= \033[0;33m
BLUE 		= \033[0;34m
PURPLE 	 	= \033[0;35m
CYAN 	 	= \033[0;36m
LIGHT_GRAY	= \033[0;37m

DARK_GRAY	= \033[1;30m
LIGHT_RED	= \033[1;31m
LIGHT_GREEN	= \033[1;32m
YELLOW 		= \033[1;33m
LIGHT_BLUE	= \033[1;34m
LIGHT_PURPLE= \033[1;35m
LIGHT_CYAN	= \033[1;36m
WHITE 		= \033[1;37m
