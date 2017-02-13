/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:32:24 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 16:28:24 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "libft.h"
# include <unistd.h>
# include <sys/wait.h>

# define RED  			"\x1B[31m"
# define GREEN  		"\x1B[32m"
# define WHITE  		"\x1B[37m"

typedef struct			s_unit_test
{
	char				*name;
	int					(*test_function)(void);
	struct s_unit_test	*next;
}						t_unit_test;

typedef struct			s_test_counter
{
	int					successful_tests;
	int					total_tests;
}						t_test_counter;

void					header(char *title);
void					tail(int failed_tests);

t_unit_test				*new_unit_test(char *name, int (*f)(void));
void					delete_test_list(t_unit_test **test_list);
void					load_test(t_unit_test **testlist, char *test_name,
							int (*f)(void));
int						launch_tests(t_unit_test **testlist);

void					error_exit(char *message);
#endif
