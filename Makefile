NAME = libft.a

SRC_DIR = src
INC_DIR = include

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC = -I $(INC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $@

%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
