# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgerard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 17:24:50 by dgerard           #+#    #+#              #
#    Updated: 2018/01/14 16:20:57 by esterna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = space_battle

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRCS =	space_battle.cpp\
		asteroid.class.cpp\
		falcon.class.cpp\
		env_obj.class.cpp\
		game_env.class.cpp\
		lazer.class.cpp

ODIR = ofiles

OFILES = $(addprefix $(ODIR)/,$(SRCS:.cpp=.o))

$(ODIR)/%.o: %.cpp
	@$(CC) $(FLAGS) -c $^ -o $@
	@/bin/echo -n "❂❂❂❂"

all: $(NAME)

$(NAME): $(OFILES)
	@echo "\033[32m[.o files created ( ͡° ͜ʖ ͡°)]\033[0m"
	@$(CC) $(FLAGS) -o $@ $(OFILES)
	@echo "\033[32m[executable created ( ͡° ͜ʖ ͡°)]\033[0m"

$(OFILES): | $(ODIR)

$(ODIR):
	@mkdir $(ODIR)

clean:
	@rm -rf $(ODIR)
	@echo "\033[31m[.o files deleted (╯°□°）╯︵ ┻━┻ ]\033[0m"

fclean: clean
	@/bin/rm -f rm $(NAME)
	@echo "\033[31m[$(NAME) executable deleted ᕙ(⇀‸↼‶)ᕗ ]\033[0m"

re: fclean all
