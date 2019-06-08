#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/09 11:45:35 by pacovali      #+#    #+#                  #
#    Updated: 2019/01/09 17:04:23 by pacovali      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file
MKBINS = @gcc -o $(NAME) *.c -Wall -Wextra -Werror
all: $(NAME)
$(NAME):
	$(MKBINS)
clean:
	@rm -f *~

fclean: clean
	@rm -f $(NAME)

re: fclean all