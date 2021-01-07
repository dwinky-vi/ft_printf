
SRCS	= \
			ft_printf.c \
			parser.c parser_utils.c processor.c \
			utils.c t_unit.c ft_dec_to_hex.c  \
			ft_print_c.c \
			ft_print_d.c \
			ft_print_p.c \
			ft_print_s.c \
			ft_print_u.c \
			ft_print_x.c \
			ft_print_percent.c\

NAME	= libftprintf.a

LIBS	= libft.h

LIBFT	= ./libft

HEADER	= ft_printf.h

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

OBJS_DIR =		.obj
OBJS	 = 		$(addprefix $(OBJS_DIR)/, $(patsubst %.c, %.o, $(SRCS)))
CRT_DIR =		.
CRT = 			$(addprefix $(OBJS_DIR)/, $(CRT_DIR))

NORMI 	= ~/.scripts/colorised_norm.sh

all:		make_libft $(NAME)

make_libft:
			@make -C ./libft
			@cp libft/libft.a ./$(NAME)

$(NAME): 	$(OBJS)
			@ar rc $(NAME) $(OBJS)
# @echo "$(LIGHT_GREEN)$(UNDER_LINE)ft_printf is done!$(NO_COLOR)\n"

# bonus:		$(BONUS_OBJS) $(OBJS)
# 			@echo "$(LIGHT_GREEN)$(UNDER_LINE)Bonuses are made!$(NO_COLOR)"
# 			@ar rc $(NAME) $(BONUS_OBJS) $(OBJS)

$(OBJS_DIR)/%.o:		%.c Makefile $(HEADER)
				@printf "\033[0;32m\033[1m[ft_printf] Compilation [$<]\033[0;0m\r"
				@mkdir -p $(CRT) 2> /dev/null || true
# @$(CC) $(CFLAGS) -I $(HEADER) -c $<
				@$(CC) $(CFLAGS) -c $< -o $@
				@printf "\033[0;32m\033[1m[ft_printf] Compilation [OK]\033[0;0m"

run:		
			@gcc $(CFLAGS) -L. -lftprintf main.c && ./a.out
			@echo "$(YELLOW)gcc -Wall -Werror -Wextra -L. -lftprintf main.c && ./a.out$(NO_COLOR)"

normi:		
			@$(NORMI) $(SRCS) $(HEADER)

normi_lib:	
			@cd $(LIBFT) && make normi

clean:
			@rm -rf $(OBJS) $(BONUS_OBJS)
			@cd $(LIBFT) && make clean
#			@echo "$(RED)$(UNDER_LINE)Object files deleted.$(NO_COLOR)"

fclean: 	clean
			@rm -rf $(NAME)
			@cd $(LIBFT) && make fclean
			@echo "$(RED)$(UNDER_LINE)$(NAME) deleted.$(NO_COLOR)"

re: 		fclean all


# source_dirs  := . Editor TextLine

#     search_wildcards := $(addsuffix /*.c, $(source_dirs)) 

#     iEdit: $(notdir $(patsubst %.c,%.o,$(wildcard $(search_wildcards))))
#         gcc $^ -o $@ 

#     VPATH := $(source_dirs)
     
#     %.o: %.c
#         gcc -c -MD $(addprefix -I,$(source_dirs)) $<

#     include $(wildcard *.d)


.PHONY: $(NAME)	all bonus clean fclean re
.PHONY: SRCS BONUS_SRCS LIBS LIBFT CC CFLAGS OBJS BONUS_OBJS

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
