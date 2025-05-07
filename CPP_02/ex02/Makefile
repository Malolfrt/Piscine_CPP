# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 16:02:48 by mlefort           #+#    #+#              #
#    Updated: 2024/09/03 10:31:31 by mlefort          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Fixed

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

FILES		=	main.cpp	\
				Fixed.cpp	\

OBJ_FILES = $(FILES:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CXX) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_FILES)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
