# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 10:38:22 by axcallet          #+#    #+#              #
#    Updated: 2023/09/21 12:47:09 by axcallet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

########## ARGUMENTS ##########

NAME		= ClapTrap
CC			= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98

########## SOURCES ##########

OBJ_DIR		= obj
OBJ			= $(SRC:.cpp=.o)
SRC_DIR		= src
SRC			= main.cpp	\
			ClapTrap.cpp

########## RULES ##########

all: title $(NAME)

$(NAME): $(OBJ)
	@echo $(_GREEN)- Compiling $(OBJ) $(END)
	@$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	@echo $(_CYAN)- Compiling $<$(END)
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@echo $(_YELLOW)- Cleaning $(OBJ)$(END)
	@rm -f $(OBJ)

fclean: clean
	@echo $(_RED)- Cleaning $(NAME)$(END)
	@rm -f $(NAME)

re: fclean all

title :
	@echo $(_PURPLE)''
	@echo '   ___ ___ ___   __  __         _      _       _____'
	@echo '  / __| _ \ _ \ |  \/  |___  __| |_  _| |___  |__  /'
	@echo ' | (__|  _/  _/ | |\/| / _ \/ _` | || | / -_)  |_  \ '
	@echo '  \___|_| |_|   |_|  |_\___/\__,_|\_,_|_\___| |____/'
	@echo '                      by Axel'$(END)
	@echo ''

.PHONY: all fclean clean re

########## COLORS ##########

_END		="\033[0m"
_RED		="\033[0;31m"
_GREEN		="\033[0;32m"
_YELLOW		="\033[0;33m"
_CYAN		="\033[0;36m"
_PURPLE		="\033[0;35m"
