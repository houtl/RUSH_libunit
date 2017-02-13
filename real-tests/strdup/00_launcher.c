/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:32:05 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 18:43:23 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strdup_tests.h"
#include "libunit.h"

int	strdup_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	write(1, "STRDUP:\n", 8);
	load_test(&testlist, "Basic test", &strdup_basic_test);
	load_test(&testlist, "Bigger string test", &strdup_bigger_str_test);
	load_test(&testlist, "empty test", &strdup_empty_test);
	return (launch_tests(&testlist));
}
