NAME = btc
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -g3
AR = ar rcs
RM = rm -f
#-fsanitize=address -g3
FILES = main \
		BitcoinExchange \

SRCS_DIR = ./
SRCS = $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(FILES)))
OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.cpp.o: $(SRCS)
	$(CC) $(FLAGS) -c -o $@ $<
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@
		
all: $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME_S)
re: clean all
.PHONY: clean fclean %.o