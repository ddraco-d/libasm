# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddraco <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/25 13:51:17 by ddraco            #+#    #+#              #
#    Updated: 2020/10/26 23:04:18 by ddraco           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

SRCO = $(SRC:.s=.o)

HEADER = lib.h

FLAGS = -fmacho64

all: $(NAME)

$(NAME): $(SRCO)
	ar rcs $(NAME) $(SRCO)

%.o:%.s $(HEADER)
	nasm $(FLAGS) $<

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all

.PHONY: all re fclean clean