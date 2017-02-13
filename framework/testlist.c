/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:32:16 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 15:33:12 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test		*new_unit_test(char *name, int (*f)(void))
{
	t_unit_test	*new;

	if (!(new = (t_unit_test *)malloc(sizeof(t_unit_test))))
		error_exit("memory allocation failed during test loading");
	new->name = name;
	new->test_function = f;
	new->next = NULL;
	return (new);
}

void			delete_test_list(t_unit_test **test_list)
{
	if (test_list && *test_list)
	{
		if ((*test_list)->next)
			delete_test_list(&(*test_list)->next);
		free(*test_list);
		*test_list = NULL;
	}
}
