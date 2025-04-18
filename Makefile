NAME =	libft.a

SOURCES =	ft_atoi.c ft_calloc.c  ft_strlen.c  ft_bzero.c  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
 			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c  ft_strlcat.c \
			ft_strlcpy.c  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c\

OBJECTS = $(SOURCES:.c=.o)

CC = cc

RM += rm -f

FLAGS += -Wall -Werror -Wextra

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJECTS)
			ar -r $(NAME) $(OBJECTS) 
%.o:	%.c
	$(CC) $(FLAGS) -c $^ -o $@
clean: 
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all