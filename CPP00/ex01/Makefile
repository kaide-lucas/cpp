# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/13 15:04:09 by kaidda-s          #+#    #+#              #
#    Updated: 2026/06/17 21:39:36 by kaidda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = phonebook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
