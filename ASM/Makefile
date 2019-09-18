# **************************************************************************** #
#                                                                              #
#                                         ____  ____   __   ____  ____         #
#    Makefile                            (  _ \(  _ \ /  \ (_  _)(  __)        #
#                                         ) __/ )   /(  o )  )(   ) _)         #
#    By: lguiller <lguiller@student      (__)  (__\_) \__/  (__) (____)        #
#                                         ___   __                             #
#    Created: 2019/03/28 15:01:38 b      / __) /  \                            #
#    Updated: 2019/09/18 11:17:12 by lguiller         ###   ########.fr        #
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
