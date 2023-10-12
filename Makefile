# Makefile for libft library

NAME = libft.a

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = includes

SRCS = $(wildcard $(SRC_DIR)/ft_*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	rmdir $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
