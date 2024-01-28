SRC = ft_isalnum.c \
        ft_isalpha.c \
        ft_isascii.c \
        ft_isdigit.c \
        ft_isprint.c \
        ft_memset.c \
        ft_strlen.c \
	    ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_strnstr.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_substr.c \
		ft_strjoin.c

OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM = rm -f
AR = ar rc
LIB_INDEX = ranlib

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@$(LIB_INDEX) $(NAME)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus