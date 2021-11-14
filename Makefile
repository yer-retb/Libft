NAME = libft.a
CC = gcc
CFLAG = -Wall -Wextra -Werror
SCRS = ft_memmove.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_atoi.c \
	ft_strnstr.c \
	ft_strncmp.c \

obj = $(SCRS:.c=.o)

all :  $(NAME)

$(NAME) : $(obj)

$(obj) : $(SCRS)
	$(CC) $(CFLAG) -c $(SCRS)
	ar rc $(NAME) $(obj)
clean : 
	rm -rf $(obj)
fclean : clean
	rm -rf $(NAME)
re : fclean all