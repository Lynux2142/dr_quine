# **************************************************************************** #
#                                                                              #
#                                         ____  ____   __   ____  ____         #
#    Makefile                            (  _ \(  _ \ /  \ (_  _)(  __)        #
#                                         ) __/ )   /(  o )  )(   ) _)         #
#    By: lguiller <lguiller@student      (__)  (__\_) \__/  (__) (____)        #
#                                         ___   __                             #
#    Created: 2019/03/28 15:01:38 b      / __) /  \                            #
#    Updated: 2019/03/28 16:53:07 b     ( (_ \(  o )                           #
#                                        \___/ \__/                            #
#                                                                              #
# **************************************************************************** #

##################
##  VARIABLES   ##
##################

OPE_SYS					= $(shell uname)
NAME					= Colleen Grace Sully
SRCS					= $(addsuffix .c, $(NAME))
OBJS					= $(SRCS:.c=.o)
TEST					= -Werror
FLAGS					= -Wall -Wextra $(TEST) -O2 -g

##################
##   TARGETS    ##
##################

.PHONY: all clean fclean re

all: Colleen Grace Sully

Colleen: Colleen.o
	@gcc $(FLAGS) Colleen.o -o Colleen

Grace: Grace.o
	@gcc $(FLAGS) Grace.o -o Grace

Sully: Sully.o
	@gcc $(FLAGS) Sully.o -o Sully

%.o: %.c
	@gcc $(FLAGS) -c $^ -o $@

clean:
	@/bin/rm -rf $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re:
	@$(MAKE) -s fclean
	@$(MAKE) -s
