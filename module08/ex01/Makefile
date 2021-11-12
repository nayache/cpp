# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nayache <nayache@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 17:55:28 by nayache           #+#    #+#              #
#    Updated: 2021/11/03 16:46:33 by nayache          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = clang++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp span.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o: $(HEADER) 
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

all :	$(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
