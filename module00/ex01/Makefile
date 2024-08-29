# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plang <plang@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 14:24:31 by plang             #+#    #+#              #
#    Updated: 2024/08/29 15:00:14 by plang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra

SRCS = PhoneBook.cpp \
		Contact.cpp \
		main.cpp

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
