# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 19:02:40 by yer-retb          #+#    #+#              #
#    Updated: 2021/11/26 19:02:41 by yer-retb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_split.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	
	
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