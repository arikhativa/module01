# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:56:52 by yrabby            #+#    #+#              #
#    Updated: 2023/04/22 11:41:34 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 					= replace

# main
SRC_MAIN				= main

# src
SRC_SUFFIX				= .cpp
SRC_DIR					= .
SRC_NAME				= $(addsuffix $(SRC_SUFFIX), $(CLASS_NAME) $(SRC_MAIN) $(OTHER_SRC))
SRC						= $(addprefix $(SRC_DIR)/, $(SRC_NAME))

# obj
OBJ_DIR					= .
OBJ						= $(SRC:.cpp=.o)

# flags
CC 						= c++
CFLAGS 					= -c  -std=c++98 -pedantic 

# implicit rules
$(addprefix $(OBJ_DIR)/, %.o): $(addprefix $(SRC_DIR)/, %.cpp) 
	$(CC) $(CFLAGS) $< -o $(@)

# rules
.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


