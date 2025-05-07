# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 14:18:36 by mlefort           #+#    #+#              #
#    Updated: 2024/07/11 17:20:32 by mlefort          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Account

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

FILES		=	tests.cpp \
				Account.cpp \

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