# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/16 10:53:46 by naperisw          #+#    #+#              #
#    Updated: 2025/06/18 15:29:55 by naperisw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

OBJ_DIR = obj

SRCS:=check_duplicates.c display_error.c free_stack.c input_check.c push_chunk_1.c\
main.c pop_stack.c push_stack.c rotate.c sort_three.c check_range.c\
find_index.c get_min_index.c sort_seven.c  push_chunk_2.c populate_stack.c\
rotate_to_sort.c swap.c count_rotations.c free_double_pointer.c index_sort.c\
is_sorted.c parse_argv.c push.c reverse_rotate.c sort_stack.c ft_atoll.c\
ft_sqrt.c

OBJ := $(SRCS:%.c=$(OBJ_DIR)/%.o)

CC = cc

CCFLAGS = -Wall -Wextra -Werror -fsanitize=address

LIBFT = libft/libft.a

INCLUDES = -Ilibft

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CCFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CCFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(INCLUDES)

$(LIBFT):
	$(MAKE) -C libft

clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all