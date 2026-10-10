# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/14 13:59:45 by naperisw          #+#    #+#              #
#    Updated: 2025/06/17 10:29:29 by naperisw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS:=ft_isalnum.c ft_memchr.c ft_strchr.c ft_strlen.c ft_memcpy.c ft_substr.c\
ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_atoi.c\
ft_isascii.c ft_memmove.c ft_strjoin.c ft_strnstr.c ft_toupper.c ft_bzero.c\
ft_isdigit.c ft_strlcat.c ft_strrchr.c ft_calloc.c ft_isprint.c ft_memset.c\
ft_strlcpy.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c


BONUS_SRCS:=ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c


OBJS:= $(SRCS:.c=.o)
BONUS_OBJS:= $(BONUS_SRCS:.c=.o)

AR = ar rcs

CC = cc

CCFLAGS = -Wall -Wextra -Werror

%.o: %.c
	@$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) ${NAME} ${OBJS}

all:$(NAME)

bonus:$(NAME) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:clean
	rm -f $(NAME)

re: fclean all

PHONY:all bonus clean fclean re