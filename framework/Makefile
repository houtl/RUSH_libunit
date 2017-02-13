# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 16:32:00 by atrudel           #+#    #+#              #
#    Updated: 2017/02/12 15:28:38 by atrudel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

SRC = 	commands.c \
		testlist.c \
		utils.c

OBJ = $(SRC:.c=.o)

INC = 	libunit.h\
		../libft/includes/libft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) ../libft/libft.a
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "libunit created"

../libft/libft.a: ../libft/Makefile ../libft/includes/libft.h
	@make -C ../libft/ fclean && make -C ../libft/

%.o: %.c $(INC)
	@gcc -o $@ -c $< $(FLAGS) -I ../libft/includes

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norme:
	norminette $(SRC) $(INC)

.PHONY: all clean fclean re norme
