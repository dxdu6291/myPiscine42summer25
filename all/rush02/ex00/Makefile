# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/13 14:58:58 by gpatrici          #+#    #+#              #
#    Updated: 2025/08/20 13:55:08 by ande-sou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = srcs/main.c srcs/find_errors.c srcs/find_nums.c srcs/dict_parse.c srcs/print_num.c srcs/read_funcs.c srcs/libft.c srcs/num_parse.c srcs/free_all.c srcs/find_errors_2.c
OBJ = $(SRC:.c=.o)
INCLUDES = -I includes

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
