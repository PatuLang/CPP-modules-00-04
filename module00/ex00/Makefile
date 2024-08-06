# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plang <plang@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 14:23:53 by plang             #+#    #+#              #
#    Updated: 2024/08/06 11:28:01 by plang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra

SRCS = Megaphone.cpp

OBJS =	$(SRCS:.cpp=.o)

all: 			$(NAME)

$(NAME): 		$(OBJS)
	$(CXX) 		$(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f		$(OBJS)

fclean:	clean
	@rm -f		$(NAME)

re:	fclean		$(NAME)

.PHONY:	all clean fclean re
