# **************************************************************************** #
#                                                                              #
#                                         ____  ____   __   ____  ____         #
#    Makefile                            (  _ \(  _ \ /  \ (_  _)(  __)        #
#                                         ) __/ )   /(  o )  )(   ) _)         #
#    By: lguiller <lguiller@student      (__)  (__\_) \__/  (__) (____)        #
#                                         ___   __                             #
#    Created: 2019/03/28 15:01:38 b      / __) /  \                            #
#    Updated: 2019/09/18 10:52:09 by lguiller         ###   ########.fr        #
#                                        \___/ \__/                            #
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
FLAGS					= -Wall -Wextra -Werror
CC						= gcc

##################
##   TARGETS    ##
##################

.PHONY: all clean fclean re
.SILENT:

all: $(NAME)

Colleen: Colleen.o
	$(CC) $(FLAGS) $^ -o $@
	echo $@

Grace: Grace.o
	$(CC) $(FLAGS) $^ -o $@
	echo $@

Sully: Sully.o
	$(CC) $(FLAGS) $^ -o $@
	echo $@

%.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	$(RM) -r $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) -s fclean
	$(MAKE) -s
