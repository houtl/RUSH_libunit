# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/12 11:57:20 by atrudel           #+#    #+#              #
#    Updated: 2017/02/12 19:15:06 by atrudel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	test_exec

SRC =	main.c \
		strcapitalize/00_launcher.c \
		strcapitalize/01_strcapitalize_lower_case_test.c \
		strcapitalize/02_strcapitalize_upper_case_test.c \
		strcapitalize/03_strcapitalize_null_test.c \
		strcapitalize/04_strcapitalize_litteral_test.c\
		strcapitalize/05_strcapitalize_timeout_test.c

OBJ = 	$(SRC:.c=.o)

INC = 	test.h \
		strcapitalize_tests.h \
		../libft/includes/libft.h \
		../framework/libunit.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) ../libft/libft.a ../framework/libunit.a
	@gcc -o $(NAME) $(FLAGS) $(SRC) -L ../framework -lunit -L ../libft -lft \
	-I../framework -I../libft/includes -I.

%.o: %.c $(INC)
	@gcc -o $@ -c $< $(FLAGS) -I../libft/includes -I../framework -I.

../framework/libunit.a :
	make -C ../framework/

../libft/libft.a :
	make -C ../libft/

test: $(NAME)
	./$(NAME)

clean:
	rm -f $(OBJ)
	make -C ../framework/ clean
	make -C ../libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C ../framework fclean
	make -C ../libft/ fclean

re: fclean all

norme:
	norminette $(SRC) $(INC)

.PHONY: all clean fclean re norme
