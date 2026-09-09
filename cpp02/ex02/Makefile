# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 17:42:58 by ualcibar          #+#    #+#              #
#    Updated: 2023/02/02 18:54:45 by ualcibar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

AR = ar rcs

RM = rm -f

# S = -fsanitize=address -g3

FILES = Fixed \
		main \

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
#		@$(CC) $(FLAGS) $(S) $^ -o $@ 

all: $(NAME)

clean:
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)
		@$(RM) $(NAME_S)

re: clean all

.PHONY: clean fclean %.o