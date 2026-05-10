# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: npaulo <npaulo@student.42porto.com>          +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 0026/04/16 12:18:19 by +#                  #+#    #+#             #
#   Updated: 2026/04/16 17:43:40 by npaulo             ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file
CC			= cc
SRCS		= ft_display_file.c
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $^ -o $@

clean:
#	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
