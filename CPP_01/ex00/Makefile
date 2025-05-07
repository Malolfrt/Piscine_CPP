# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 14:18:36 by mlefort           #+#    #+#              #
#    Updated: 2024/08/12 18:43:28 by mlefort          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Brainz

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

FILES		=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp \

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