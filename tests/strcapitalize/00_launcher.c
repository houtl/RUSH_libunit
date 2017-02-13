/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:24:39 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 18:49:09 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcapitalize_tests.h"
#include "libunit.h"

int	strcapitalize_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	write(1, "STRCAPITALIZE\n", 14);
	load_test(&testlist, "Lower case letters", &strcapitalize_lower_case_test);
	load_test(&testlist, "Upper case letters", &strcapitalize_upper_case_test);
	load_test(&testlist, "Null input", &strcapitalize_null_test);
	load_test(&testlist, "Litteral input", &strcapitalize_litteral_test);
	load_test(&testlist, "Infinite loop", &strcapitalize_timeout_test);
	return (launch_tests(&testlist));
}
