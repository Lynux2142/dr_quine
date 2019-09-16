# **************************************************************************** #
#                                                                              #
#                                         ____  ____   __   ____  ____         #
#    Makefile                            (  _ \(  _ \ /  \ (_  _)(  __)        #
#                                         ) __/ )   /(  o )  )(   ) _)         #
#    By: lguiller <lguiller@student      (__)  (__\_) \__/  (__) (____)        #
#                                         ___   __                             #
#    Created: 2019/03/28 15:01:38 b      / __) /  \                            #
#    Updated: 2019/09/16 15:33:10 by lguiller         ###   ########.fr        #
#                                        \___/ \__/                            #
#                                                                              #
# **************************************************************************** #

##################
##  VARIABLES   ##
##################

OPE_SYS					= $(shell uname)
NAME					= Colleen Grace Sully
SRCS					= $(addsuffix .s, $(NAME))
OBJS					= $(SRCS:.s=.o)
FLAGS_GCC				=
FLAGS_NASM				= -f macho64
CC						= gcc

##################
##   TARGETS    ##
##################

.PHONY: all clean fclean re
.SILENT:

all: $(NAME)

$(OBJS): %.o: %.s
	nasm $(FLAGS_NASM) $^ -o $@

$(NAME): %: %.o
	$(CC) $(FLAGS_GCC) $^ -o $@ 2>/dev/null

clean:
	$(RM) -r $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) -s fclean
	$(MAKE) -s
