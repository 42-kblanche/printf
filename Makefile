NAME = libftprintf.a
CC = cc
AR = ar rcs
TEST_O = a.out
test: DEBUG = -g
all: DEBUG =
CFLAGS = -Wall -Wextra -Werror
NEUTRAL = \033[0;0m
RED = \033[0;31m
YELLOW = \033[0;33m
BLUE = \033[0;34m

SRCS = libft/ft_calloc.c \
	   libft/ft_itoa.c \
	   libft/ft_itoh.c \
	   libft/ft_memcpy.c \
	   libft/ft_ptoh.c \
	   libft/ft_putstr_fd.c \
	   libft/ft_strdup.c \
	   libft/ft_strfind.c \
	   libft/ft_strlcpy.c \
	   libft/ft_strlen.c \
	   libft/ft_strncmp.c \
	   libft/ft_tolower.c \
	   libft/ft_toupper.c \
	   buffft/ft_buff_append.c \
	   buffft/ft_buff_assign.c \
	   buffft/ft_buff_destroy.c \
	   buffft/ft_buff_double_size.c \
	   buffft/ft_buff_erase.c \
	   buffft/ft_buff_init.c \
	   buffft/ft_buff_insert.c \
	   buffft/ft_buff_insert_2.c \
	   buffft/ft_buff_print.c \
	   buffft/ft_buff_substr.c \
	   printfft/ft_printf_parse.c \
	   printfft/ft_printf_parse_2.c \
	   printfft/ft_printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

re: fclean all

test: $(OBJS)
	$(CC) $(CFLAGS) $(DEBUG) main.c $^ -o $(TEST_O)

testlib: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lftprintf

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@printf "${YELLOW}Building library ${BLUE}${NAME}\n${NEUTRAL}"

%.o: %.c
	@$(CC) $(CFLAGS) $(DEBUG) -o $@ -c $^

fclean: clean
	@rm -f $(NAME) $(TEST_O)
	@printf "${RED}Deleting archives and binaries\n${NEUTRAL}"

clean:
	@rm -f $(OBJS)
	@printf "${RED}Deleting object files\n${NEUTRAL}"

.PHONY: ftest test all fclean clean re
