CC = clang
CFLAGS = -Wall -Wextra -Werror -g -c
LFLAGS = -L. -lft
NAME = push_swap

OBJ_DIR = dist
OBJ_DIRS = $(OBJ_DIR) $(OBJ_DIR)/stack/core $(OBJ_DIR)/actions $(OBJ_DIR)/sorting
HEADERS = includes/push_swap.h

TARGETS = 	main.c \
			error.c \
			init.c \
			push_swap.c \
			checkers.c \
			clear_ctx.c \
			utils.c \
			get_args.c \
			stack/clear_stack.c \
			stack/generate_stack.c \
			stack/print_stack.c \
			stack/add_back.c \
			stack/add_front.c \
			stack/new.c \
			actions/sa.c \
			actions/sb.c \
			actions/ss.c \
			actions/pa.c \
			actions/pb.c \
			actions/ra.c \
			actions/rb.c \
			actions/rr.c \
			actions/rra.c \
			actions/rrb.c \
			actions/rrr.c \
			actions/shift.c \
			actions/reverse_shift.c \
			actions/pop_first.c \
			actions/pop_last.c \
			actions/swap_top.c \
			sorting/merge_sort.c \
			sorting/compare_bits.c \
			sorting/is_sorted.c

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
