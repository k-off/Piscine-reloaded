#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/09 11:45:35 by pacovali      #+#    #+#                  #
#    Updated: 2019/01/09 13:19:25 by pacovali      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c \
srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o
ADDHDR = -I ./includes
MKBINS = @gcc -c -Wall -Wextra -Werror
MKLIBS = @ar -rc
all: $(NAME)
$(NAME):
	$(MKBINS) $(SRCS) $(ADDHDR)
	$(MKLIBS) $(NAME) $(OBJS)
clean:
	@rm -f *.o *~

fclean: clean
	@rm -f $(NAME)

re: fclean all