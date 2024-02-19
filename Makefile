NAME = cub3D

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = main.c \
		cub3d.c \
		get_next_line/get_next_line.c \
		get_next_line/get_next_line_utils.c \
		map_parse/parse.c \
		map_parse/cubfile.c \
		utils/ft_strlen.c \
		utils/error.c \
	

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

