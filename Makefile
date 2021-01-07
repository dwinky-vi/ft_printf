
SRCS	= \
			utils.c \
			t_unit.c \
			parser.c \
			ft_printf.c \
			processor.c  \
			ft_print_c.c \
			ft_print_d.c \
			ft_print_p.c \
			ft_print_s.c \
			ft_print_u.c \
			ft_print_x.c \
			parser_utils.c \
			ft_dec_to_hex.c \
			ft_print_percent.c

NAME	= libftprintf.a

LIBFT	= ./libft

HEADER	= ft_printf.h

CC		= gcc

CFLAGS	= 

# создаём скрытую директорию, в которой будут .o файлы
OBJS_DIR =		.obj

# прописываем (добавляем) путь для каждого .o файла
OBJS	 = 		$(addprefix $(OBJS_DIR)/, $(patsubst %.c, %.o, $(SRCS)))

# в начало каждого пути добавляем точку
CRT = 			$(addsuffix . , $(OBJS_DIR)/)

NORMI 	= ~/.scripts/colorised_norm.sh

all:		make_libft $(NAME)

make_libft:
			@echo "$(BLUE)"
			@make -C ./libft
			@echo "$(CLEAR)"
			@cp libft/libft.a ./$(NAME)

$(NAME): 	$(OBJS) $(HEADER)
			@ar rc $(NAME) $?
			@printf "$(GREEN)$(BOLD)[Success compiling]$(CLEAR)"

# bonus:		$(BONUS_OBJS) $(OBJS)
# 			@echo "$(LIGHT_GREEN)$(UNDER_LINE)Bonuses are made!$(NO_COLOR)"
# 			@ar rc $(NAME) $(BONUS_OBJS) $(OBJS)

$(OBJS_DIR)/%.o:		%.c Makefile $(HEADER)
				@test -d $(OBJS_DIR) || mkdir $(OBJS_DIR)
				@printf "$(GREEN)$(BOLD)Compilation $(YELLOW)[$<]$(CLEAR)\r"
				@sleep 0.05
				@$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

run:
			@gcc $(CFLAGS) -L. -lftprintf main.c && ./a.out
			@echo "$(YELLOW)gcc -Wall -Werror -Wextra -L. -lftprintf main.c && ./a.out$(NO_COLOR)"

normi:		
			@$(NORMI) $(SRCS) $(HEADER)

normi_lib:
			@cd $(LIBFT) && make normi

clean:
			@rm -rf $(OBJS) $(BONUS_OBJS)
			@/bin/rm -rf $(OBJS_DIR)
			@cd $(LIBFT) && make clean

fclean: 	clean
			@rm -rf $(NAME)
			@cd $(LIBFT) && make fclean
			@echo "$(RED)$(UNDER_LINE)$(NAME) deleted.$(NO_COLOR)"

re: 		fclean all

.PHONY: $(NAME)	all bonus clean fclean re
.PHONY: SRCS BONUS_SRCS LIBS LIBFT CC CFLAGS OBJS BONUS_OBJS

UNDER_LINE	= \033[4m
BOLD	 	= \033[1m
CLEAR		= \033[0;0m

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
