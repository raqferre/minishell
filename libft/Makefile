# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raqferre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 01:42:46 by raqferre          #+#    #+#              #
#    Updated: 2023/09/17 01:42:58 by raqferre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_toupper.c ft_tolower.c \
				ft_isspace.c \
				ft_strncmp.c ft_memcmp.c ft_atoi.c ft_atoi_base.c \
				ft_strtol.c ft_atol.c \
				ft_atof.c ft_strlen.c \
				ft_strlcpy.c ft_strlcat.c ft_bzero.c ft_striteri.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c ft_swap.c \
				ft_memset.c ft_memcpy.c ft_memmove.c \
				ft_memchr.c ft_calloc.c ft_strchr.c ft_strrchr.c \
				ft_strnstr.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strjoin_free.c ft_strtrim.c ft_itoa.c \
				ft_strmapi.c ft_split.c \
				ft_lstnew.c ft_lstlast.c ft_lstmap.c \
				ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstiter.c ft_lstclear.c ft_lstsize.c \
				ft_strcmp.c ft_ltoa.c \
				get_next_line.c \

OBJS		= $(SRCS:.c=.o)

NAME		= libft.a

CC			= cc

LIBC		= ar rcs

LIBR		= ranlib

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

FT_PRINTF	= make -C ft_printf && cp ft_printf/libftprintf.a $(NAME)

RMPRINTF	= make -C ft_printf clean

FCPRINTF	= make -C ft_printf fclean

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)
			$(LIBR) $(NAME)
			$(FT_PRINTF)

all:		$(NAME)

clean:
			$(RM) $(OBJS)
			$(RMPRINTF)

fclean:		clean
			$(RM) $(NAME)
			$(FCPRINTF)

re:			fclean all

.PHONY:		all clean fclean re

