# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nayache <nayache@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 17:55:28 by nayache           #+#    #+#              #
#    Updated: 2021/11/02 13:31:27 by nayache          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp Tfunc.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
.cpp.o: 
		$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all
all :	$(NAME)

.PHONY: clean
clean : 
	rm -rf $(OBJS)

.PHONY: fclean
fclean : clean
	rm -rf $(NAME)

.PHONY: re
re : fclean all
