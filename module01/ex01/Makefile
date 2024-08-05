# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plang <plang@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 14:26:25 by plang             #+#    #+#              #
#    Updated: 2024/08/05 14:26:27 by plang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoarBrainz

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra

SRCS = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

OBJS =	$(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME): 		$(OBJS)
	$(CXX)		$(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f		$(OBJS)

fclean:	clean
	@rm -f		$(NAME)

re:	fclean		$(NAME)

.PHONY:	all clean fclean re