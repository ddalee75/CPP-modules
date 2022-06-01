# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chilee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 15:42:33 by chilee            #+#    #+#              #
#    Updated: 2022/06/01 15:43:36 by chilee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brian

SRCS = main.cpp 
	
CC = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $@ $^ 	
	@echo "$(shell tput setaf 2)program created... $(shell tput sgr0)"

clean :
	@$(RM) $(OBJS) 
	@echo "$(shell tput setaf 3)Objets cleaned...$(shell tput sgr0)"

fclean : clean
	@$(RM) $(NAME)
	@echo "$(shell tput setaf 6)program cleaned...$(shell tput sgr0)"

re: fclean all

.PHONY: clean fclean re all
