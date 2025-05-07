# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 14:18:36 by mlefort           #+#    #+#              #
#    Updated: 2024/10/22 10:42:25 by mlefort          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PmergeMe

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ_PATH	= obj

FILES		=	main.cpp	\
				PmergeMe.cpp \
				
OBJ_FILES = $(addprefix $(OBJ_PATH)/, $(FILES:.cpp=.o))


all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CXX) $(CPPFLAGS) -o $@ $^

$(OBJ_PATH)/%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_FILES)

fclean:	clean
	rm -rf $(NAME)
	rm -rf $(OBJ_PATH)

re: fclean
	make all

.PHONY: all clean fclean re