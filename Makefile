# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 10:17:44 by gonolive          #+#    #+#              #
#    Updated: 2024/04/22 21:12:51 by gonolive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
					ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
					ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
					ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
					ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
					ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
					ft_toupper.c
OBJS 			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:         clean
				$(RM) $(NAME)

re:             fclean $(NAME)

so:
				$(CC) -fPIC $(CFLAGS) $(SRC)
				gcc -shared -o libft.so $(OBJ)

.PHONY:         all clean fclean re