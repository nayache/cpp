# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nayache <nayache@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 17:55:28 by nayache           #+#    #+#              #
#    Updated: 2021/10/27 20:41:16 by nayache          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Converter

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp Convert.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
.cpp.o: 
		$(CC) $(CFLAGS) -c $< -o $@

all :	$(NAME)

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

