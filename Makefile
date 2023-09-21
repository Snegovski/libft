# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 04:06:34 by ral-bakr          #+#    #+#              #
#    Updated: 2023/08/14 04:06:34 by ral-bakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
MANDATORY=
OBJECT= $(MANDATORY:.c=.o) 

CC= gcc
CFLAGS= -Wall -Wextra -Werror -fsanitize=address,undefined -g3

AR= ar rcs
RM= rm -rf

all: $(NAME)
	

$(NAME): $(OBJECT)
	$(AR) $(OBJECT) $(NAME)

clean:
	$(RM) $(OBJECT)


fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re $(NAME)