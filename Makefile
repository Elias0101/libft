# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smanhack <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 18:27:40 by smanhack          #+#    #+#              #
#    Updated: 2019/04/04 19:41:10 by tkarri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ./srcs/
INCL = ./

FUNCTION_C = ./srcs/ft_isdigit.c
FUNCTION_O = *.o

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -I$(INCL) -c $(FUNCTION_C)
	ar rc $(NAME) $(FUNCTION_O)
	ranlib $(NAME)
	rm -f $(FUNCTION_O)

clean:
	rm -f $(FUNCTION_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
