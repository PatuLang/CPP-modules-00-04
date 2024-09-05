# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plang <plang@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/29 17:28:34 by plang             #+#    #+#              #
#    Updated: 2024/09/04 11:27:06 by plang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra

SRCS = 

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