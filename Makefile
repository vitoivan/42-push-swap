CC = clang
CFLAGS = -Wall -Wextra -Werror -g -c
LFLAGS = -L. -lft
NAME = push_swap

OBJ_DIR = dist
OBJ_DIRS = $(OBJ_DIR) $(OBJ_DIR)/stack
HEADERS = includes/push_swap.h

TARGETS = 	main.c \
			utils.c \
			error.c \
			stack/clear_stack.c \
			stack/generate_stack.c \
			stack/print_stack.c

SRC = $(addprefix ./src/,$(TARGETS)) 
OBJ = $(addprefix ./$(OBJ_DIR)/,$(TARGETS:.c=.o)) 
LIBFT = libft.a
VALGRIND_FLAGS = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose

args = 1 6 4 3 2 5

all: $(NAME) 

test: all
	@clear
	@./$(NAME) $(args)

valgrind: $(NAME)
	@clear
	@$(VALGRIND_FLAGS) ./$(NAME) $(args)


$(NAME): $(LIBFT) $(OBJ_DIRS) $(OBJ)  
	$(CC) $(OBJ) $(LFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: src/%.c $(HEADERS)
	$(CC) $(CFLAGS) $< -o $@

$(LIBFT):
	make -C libs/libft
	cp libs/libft/libft.a $(LIBFT) 

$(OBJ_DIRS):
	mkdir -p $(OBJ_DIRS)

dclean: fclean
	make -C libs/libft fclean

clean: 
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)
	rm -f $(LIBFT)

re: fclean $(NAME)

.PHONY: dclean clean fclean all re run
