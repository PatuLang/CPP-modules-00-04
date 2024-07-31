# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 14:37:32 by user              #+#    #+#              #
#    Updated: 2024/07/31 16:52:13 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra

SRCS = megaphone.cpp

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
