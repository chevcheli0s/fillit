# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 23:00:02 by knarwhal          #+#    #+#              #
#    Updated: 2019/09/19 23:03:33 by knarwhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# program name
NAME = fillit
# compilation flags
FLAGS = -Wall -Wextra -Werror
# source files
SRCS = $(wildcard *.c)
# object files
OBJS = $(wildcard *.o)
# headers
HDRS = $(wildcard *.h)
# libft
LIB = ./libft/libft.a

all: $(NAME)

$(NAME): $(SRCS) $(OBJS) $(HDRS)
	make -C libft/ all
	gcc $(FLAGS) -o $(NAME) $(SRCS) $(OBJS) $(LIB)

clean:
	make -C libft/ clean
	rm -f $(OBJS)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
