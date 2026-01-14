NAME = libftprintf.a
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
NEUTRAL = \033[0;0m
RED = \033[0;31m
YELLOW = \033[0;33m
BLUE = \033[0;34m

SRCS = libft/ft_printf.c \
	   libft/ft_calloc.c \
	   libft/ft_memcpy.c \
	   libft/ft_putstr_fd.c \
	   libft/ft_strlcpy.c \
	   libft/ft_strlen.c \
	   libft/ft_strncmp.c \
	   stringft/ft_string_append.c \
       stringft/ft_string_assign.c \
       stringft/ft_string_destroy.c \
       stringft/ft_string_double_size.c \
       stringft/ft_string_find.c \
       stringft/ft_string_init.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

re: fclean all

test: $(NAME)
	$(CC) -g main.c -L. -lftprintf

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@printf "${YELLOW}Building library ${BLUE}${NAME}\n${NEUTRAL}"

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $^

fclean: clean
	@rm -f $(NAME) $(TEST_O)
	@printf "${RED}Deleting archives and binaries\n${NEUTRAL}"

clean:
	@rm -f $(OBJS)
	@printf "${RED}Deleting object files\n${NEUTRAL}"

.PHONY: ftest test all fclean clean re
