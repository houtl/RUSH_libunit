# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/12 11:57:20 by atrudel           #+#    #+#              #
#    Updated: 2017/02/12 19:07:57 by atrudel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	test_exec

SRC = 	main.c \
		atoi/00_launcher.c \
		atoi/01_atoi_basic_test.c \
		atoi/02_atoi_max_test.c \
		atoi/03_atoi_min_test.c \
		atoi/04_atoi_white_test.c \
		atoi/05_atoi_long_test.c \
		atoi/06_atoi_overlong_test.c \
		strdup/00_launcher.c \
		strdup/01_strdup_basic_test.c \
		strdup/02_strdup_bigger_str_test.c \
		strdup/03_strdup_empty_test.c \
		strlen/00_launcher.c \
		strlen/01_strlen_basic_test.c \
		strlen/02_strlen_bigger_str_test.c \
		strlen/03_strlen_unicode_test.c \
		strsplit/00_launcher.c \
		strsplit/01_strsplit_basic_test.c \
		strsplit/02_strsplit_null_test.c \
		strsplit/03_strsplit_white_test.c \
		strsplit/04_strsplit_empty_test.c \
		strsplit/05_strsplit_full_test.c

OBJ = 	$(SRC:.c=.o)

INC = 	test.h \
		atoi_tests.h \
		strdup_tests.h \
		strlen_tests.h \
		strsplit_tests.h \
		../libft/includes/libft.h \
		../framework/libunit.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) ../libft/libft.a ../framework/libunit.a
	@gcc -o $(NAME) $(FLAGS) $(SRC) -L ../framework -lunit -L ../libft -lft \
	-I../framework -I../libft/includes -I.

../framework/libunit.a :
	make -C ../framework/

../libft/libft.a :
	make -C ../libft/
	@echo "libft created"

%.o: %.c $(INC)
	@gcc -o $@ -c $< $(FLAGS) -I../libft/includes -I../framework -I.

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
	norminette $(INC) $(SRC)

.PHONY: all clean fclean re norme
