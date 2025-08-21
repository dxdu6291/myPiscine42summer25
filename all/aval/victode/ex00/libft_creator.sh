# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 18:16:15 by victode-          #+#    #+#              #
#    Updated: 2025/08/16 18:12:59 by victode-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!bin/bash

FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"

cc -Wall -Wextra -Werror -c $FILES
ar rc libft.a *.o
ranlib libft.a
rm -f *.o