# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 10:29:07 by rapohlen          #+#    #+#              #
#    Updated: 2025/11/04 11:51:08 by rapohlen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
AR		= ar rcs
CFLAGS	= -Wall -Wextra -Werror

SRC1	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c \
		  ft_toupper.c ft_tolower.c \
		  ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		  ft_atoi.c ft_calloc.c ft_strdup.c
SRC2	= ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		  ft_strmapi.c ft_striteri.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCB	= ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c \
		  ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c \
		  ft_lstiter.c ft_lstmap.c

SRCS	= $(SRC1) $(SRC2)

OBJ		= $(SRCS:.c=.o)
OBJB	= $(SRCB:.c=.o)

NAME	= libft.a

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $@ $^

bonus:		$(OBJB)
			$(AR) $(NAME) $^

clean:
			rm -f $(OBJ) $(OBJB)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: clean fclean all
