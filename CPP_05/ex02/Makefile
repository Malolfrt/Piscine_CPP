# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 14:18:36 by mlefort           #+#    #+#              #
#    Updated: 2024/09/18 16:50:14 by mlefort          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Big_Form

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ_PATH	= obj

FILES		=	main.cpp			\
				Bureaucrat.cpp		\
				AForm.cpp			\
				ShrubberyCreationForm.cpp			\
				RobotomyRequestForm.cpp			\
				PresidentialPardonForm.cpp			\
				
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