# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 15:23:33 by robinheck         #+#    #+#              #
#    Updated: 2024/08/27 15:24:25 by robinheck        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

# Executable name
NAME := trapgame

# Source files
SRCS := main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

# Object files
OBJS := $(SRCS:.cpp=.o)

# Header files
HEADERS := ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re