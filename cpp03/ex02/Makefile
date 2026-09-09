# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 12:05:22 by ualcibar          #+#    #+#              #
#    Updated: 2023/01/28 18:35:58 by ualcibar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = flagTrap
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
AR = ar rcs
RM = rm -f
# S = -fsanitize=address -g3
FILES = ClapTrap \
        main \
		ScavTrap \
		FragTrap \

SRCS_DIR = ./
SRCS = $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(FILES)))
OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.cpp.o: $(SRCS)
	@$(CC) $(FLAGS) -c -o $@ $<
$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $^ -o $@
		
#san : $(NAME_S)
#$(NAME_S): $(OBJS)
#       @$(CC) $(FLAGS) $(S) $^ -o $@
all: $(NAME)
clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(NAME_S)
re: clean all
.PHONY: clean fclean %.o