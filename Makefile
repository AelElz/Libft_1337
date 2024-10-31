NAME = libft.a

SRCS =	ft_atoi.c ft_isdigit.c ft_memset.c ft_striteri.c ft_strncmp.c ft_toupper.c\
			ft_bzero.c ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strnstr.c\
			ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c\
			ft_isalnum.c ft_memcmp.c ft_split.c ft_strlcpy.c ft_strtrim.c\
			ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_substr.c\
			ft_isascii.c ft_memmove.c ft_strdup.c ft_strmapi.c ft_tolower.c\
			ft_striteri.c ft_putendl_fd.c ft_split.c 

FLAGS = -Wall -Wextra -Werror

CC = cc

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $?

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re