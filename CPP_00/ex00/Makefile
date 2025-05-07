# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 16:02:48 by mlefort           #+#    #+#              #
#    Updated: 2024/07/09 16:52:29 by mlefort          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

FILES		=	megaphone.cpp \

OBJ_FILES = $(FILES:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_FILES)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
