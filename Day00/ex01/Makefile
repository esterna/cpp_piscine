# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esterna <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 19:02:30 by esterna           #+#    #+#              #
#    Updated: 2018/01/09 23:16:11 by esterna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX = clang++

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) main.cpp

clean:

fclean: clean
	rm $(NAME)

re: fclean all
