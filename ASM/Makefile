# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lguiller <lguiller@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 11:56:03 by lguiller          #+#    #+#              #
#    Updated: 2019/09/18 11:56:09 by lguiller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##################
##  VARIABLES   ##
##################

OPE_SYS					= $(shell uname)
NAME					= Colleen
NAME					+= Grace
NAME					+= Sully
SRCS					= $(addsuffix .s, $(NAME))
OBJS					= $(SRCS:.s=.o)
FLAGS					= -Wall -Wextra -Werror -arch x86_64
FLAGS_NASM				= -f macho64
CC						= gcc

##################
##   TARGETS    ##
##################

.PHONY: all clean fclean re
.SILENT:

all: $(NAME)

$(NAME): %: %.o
	$(CC) $(FLAGS) $^ -o $@ 2>/dev/null
	echo $@

$(OBJS): %.o: %.s
	nasm $(FLAGS_NASM) $^ -o $@

clean:
	$(RM) -r $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) -s fclean
	$(MAKE) -s
