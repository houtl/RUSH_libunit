/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:48:13 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 16:07:20 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strsplit_tests.h"
#include "libunit.h"

int	strsplit_launcher(void)
{
	t_unit_test *testlist;

	write(1, "STRSPLIT:\n", 10);
	load_test(&testlist, "Basic test", &strsplit_basic_test);
	load_test(&testlist, "NULL test", &strsplit_null_test);
	load_test(&testlist, "white test", &strsplit_white_test);
	load_test(&testlist, "empty test", &strsplit_empty_test);
	load_test(&testlist, "full test", &strsplit_full_test);
	return (launch_tests(&testlist));
}
