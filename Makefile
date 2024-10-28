NAME = libft.a

SRC_FLS =	ft_atoi.c       ft_isdigit.c    ft_memset.c     ft_striteri.c   ft_strncmp.c    ft_toupper.c\
			ft_bzero.c      ft_isprint.c    ft_putchar_fd.c ft_strjoin.c    ft_strnstr.c\
			ft_calloc.c     ft_memchr.c     ft_putstr_fd.c  ft_strlcat.c    ft_strrchr.c\
			ft_isalnum.c    ft_memcmp.c     ft_split.c      ft_strlcpy.c    ft_strtrim.c\
			ft_isalpha.c    ft_memcpy.c     ft_strchr.c     ft_strlen.c     ft_substr.c\
			ft_isascii.c    ft_memmove.c    ft_strdup.c     ft_strmapi.c    ft_tolower.c\

FLAGS = -Wall -Wextra -Werror

MK_ARCHV = ar rcs

CC = cc

OBJ_FLS = $(SRC_FLS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FLS)
	$(MK_ARCHV) $@ $?

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FLS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re