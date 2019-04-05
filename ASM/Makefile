# **************************************************************************** #
#                                                                              #
#                                         ____  ____   __   ____  ____         #
#    Makefile                            (  _ \(  _ \ /  \ (_  _)(  __)        #
#                                         ) __/ )   /(  o )  )(   ) _)         #
#    By: lguiller <lguiller@student      (__)  (__\_) \__/  (__) (____)        #
#                                         ___   __                             #
#    Created: 2019/03/28 15:01:38 b      / __) /  \                            #
#    Updated: 2019/04/05 11:09:52 b     ( (_ \(  o )                           #
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
INCLUDES				= -lc --dynamic-linker /lib64/ld-linux-x86-64.so.2
FLAGS_GCC				= -no-pie
FLAGS					= -D linux
FLAGS_NASM				= -f elf64

##################
##   TARGETS    ##
##################

.PHONY: all clean fclean re

all: $(NAME)

$(OBJS): %.o: %.s
	@nasm $(FLAGS_NASM) $(FLAGS) $^ -o $@

$(NAME): %: %.o
	@gcc $(FLAGS_GCC) $(FLAGS) $^ -o $@

clean:
	@/bin/rm -rf $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re:
	@$(MAKE) -s fclean
	@$(MAKE) -s
