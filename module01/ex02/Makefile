# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 15:02:12 by user              #+#    #+#              #
#    Updated: 2024/08/01 15:05:31 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HiThisIsBrain

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra

SRCS = main.cpp \

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