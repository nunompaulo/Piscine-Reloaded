# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: npaulo <npaulo@student.42porto.com>          +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 0026/04/15 18:19:13 by +#                  #+#    #+#             #
#   Updated: 2026/04/16 10:30:03 by npaulo             ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

# -c indica que compilar o resultado final de objecto
# $< nome da primeira dependencia da regra
# -o nome do ficheiro compilado
# $@ nome do ficheiro da regra

NAME		= libft.a
SRCDIR		= srcs/
SRCS		= $(SRCDIR)ft_putchar.c \
		  	  $(SRCDIR)ft_putstr.c \
		  	  $(SRCDIR)ft_strcmp.c \
		  	  $(SRCDIR)ft_strlen.c \
		  	  $(SRCDIR)ft_swap.c
INCL		= includes/
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f
AR			= ar rcs
OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	cc $(FLAGS) -I$(INCL) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
