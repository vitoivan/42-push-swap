CC = clang
CFLAGS = -Wall -Wextra -Werror -g -c
LFLAGS = -L. -lft
NAME = push_swap

OBJ_DIR = dist
HEADERS = includes/push_swap.h

TARGETS = 	main.c

SRC = $(addprefix ./src/,$(TARGETS)) 
OBJ = $(addprefix ./$(OBJ_DIR)/,$(TARGETS:.c=.o)) 
LIBFT = libft.a

all: $(NAME) 

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJ)  
	$(CC) $(OBJ) $(LFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: src/%.c $(HEADERS)
	$(CC) $(CFLAGS) $< -o $@

$(LIBFT):
	make -C libs/libft
	cp libs/libft/libft.a $(LIBFT) 

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

dclean: fclean
	make -C libs/libft fclean

clean: 
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)
	rm -f $(LIBFT)

re: fclean $(NAME)

.PHONY: dclean clean fclean all re
