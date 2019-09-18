# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lguiller <lguiller@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 11:54:51 by lguiller          #+#    #+#              #
#    Updated: 2019/09/18 12:08:21 by lguiller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##################
##  VARIABLES   ##
##################

OPE_SYS					= $(shell uname)
NAME					= Colleen
NAME					+= Grace
NAME					+= Sully
SRCS					= $(addsuffix .c, $(NAME))
OBJS					= $(SRCS:.c=.o)
FLAGS					= -Wall -Wextra -Werror -g
CC						= gcc

##################
##   TARGETS    ##
##################

.PHONY: all clean fclean re
.SILENT:

all: $(NAME)

$(NAME): %: %.o
	$(CC) $(FLAGS) $^ -o $@
	echo $@

$(OBJS): %.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	$(RM) -r $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) -s fclean
	$(MAKE) -s
