# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plang <plang@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 09:51:51 by plang             #+#    #+#              #
#    Updated: 2024/10/21 16:38:06 by plang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Gandalf

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra -g #-fsanitize=address

SRCS = main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \
		Floor.cpp

OBJS =	$(SRCS:.cpp=.o)

all:			$(NAME)

%.o: %.cpp
	@$(CXX) -o $@ -c $< $(CXXFLAGS)	

$(NAME): 		$(OBJS)
	$(CXX)		$(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f		$(OBJS)

fclean:	clean
	@rm -f		$(NAME)

re:	fclean		$(NAME)

.PHONY:	all clean fclean re