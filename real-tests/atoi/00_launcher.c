/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 12:55:04 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 18:43:07 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "atoi_tests.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	write(1, "ATOI:\n", 6);
	load_test(&testlist, "Basic test", &atoi_basic_test);
	load_test(&testlist, "Max test", &atoi_max_test);
	load_test(&testlist, "Min test", &atoi_min_test);
	load_test(&testlist, "White test", &atoi_white_test);
	load_test(&testlist, "Long test", &atoi_long_test);
	load_test(&testlist, "OverLong test", &atoi_overlong_test);
	return (launch_tests(&testlist));
}
