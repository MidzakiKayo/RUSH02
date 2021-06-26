NAME = RUSH02

SRCS = main.c
CC = gcc
CFLAGS = -Wextra -Werror -Wall
RM = rm -f
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< .c=.o

all: $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

$(NAME):	$(OBJS)

clean:	
	$(RM) $(OBJS)
fclean: $(clean)
	$(RM) $(NAME)

.PHONY: all clean fclean

