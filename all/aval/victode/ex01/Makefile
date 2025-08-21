# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 19:54:58 by victode-          #+#    #+#              #
#    Updated: 2025/08/19 20:23:47 by victode-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
SRCS= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS= $(SRCS:.c=.o)
CC= cc
FLAGS= -Wall -Wextra -Werror -Iincludes
COMPRESS= ar rcs
RM= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPRESS) $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#test: $(NAME) main.c
#	$(CC) $(CFLAGS) main.c -L. -lft

.PHONY: all clean fclean re test