# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nayache <nayache@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 17:55:28 by nayache           #+#    #+#              #
#    Updated: 2021/09/02 09:28:58 by smith            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp replace.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
.cpp.o: 
		$(CC) $(CFLAGS) -c $< -o $@

all :	$(NAME)

test : $(NAME)
	bash test.sh

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

