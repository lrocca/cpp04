# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 19:00:20 by lrocca            #+#    #+#              #
#    Updated: 2021/11/26 18:51:07 by lrocca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	zoo
FILES	=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJ		=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJ) $(wildcard *.gch)

fclean: clean
	$(RM) $(NAME)

re: fclean all
