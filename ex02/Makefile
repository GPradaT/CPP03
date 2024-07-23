# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 10:31:32 by gprada-t          #+#    #+#              #
#    Updated: 2024/07/23 13:16:13 by gprada-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RepetitiveWork

SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

CPPNDFLAGS = c++ -std=c++98 -Wall -Wextra -Werror -fsanitize=address -MMD -MP

all: $(NAME)

$(NAME): $(OBJS)
	$(CPPNDFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CPPNDFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include: $(DEPS)
