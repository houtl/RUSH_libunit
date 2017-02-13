/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 11:30:30 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 18:43:32 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "strlen_tests.h"

int		strlen_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	write(1, "STRLEN:\n", 8);
	load_test(&testlist, "Basic test", &strlen_basic_test);
	load_test(&testlist, "Bigger string test", &strlen_bigger_str_test);
	load_test(&testlist, "Unicode test", &strlen_unicode_test);
	return (launch_tests(&testlist));
}
