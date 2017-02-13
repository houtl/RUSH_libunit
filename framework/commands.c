/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:32:08 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 17:17:34 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_unit_test **testlist, char *test_name, int (*f)(void))
{
	t_unit_test	*current;

	if (*testlist)
	{
		current = *testlist;
		while ((current)->next)
			current = current->next;
		current->next = new_unit_test(test_name, f);
	}
	else
		*testlist = new_unit_test(test_name, f);
}

void	display_status(int status, t_unit_test *u_test, t_test_counter *counter)
{
	counter->total_tests += 1;
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			ft_printf("%s\t>%-30s%s\n", GREEN, u_test->name, "[OK]");
			counter->successful_tests += 1;
		}
		else
			ft_printf("%s\t>%-30s%s\n", RED, u_test->name, "[KO]");
	}
	else
	{
		if (status == SIGSEGV)
			ft_printf("%s\t>%-30s%s\n", RED, u_test->name, "[SEGV]");
		else if (status == SIGBUS)
			ft_printf("%s\t>%-30s%s\n", RED, u_test->name, "[BUSE]");
		else if (status == SIGABRT)
			ft_printf("%s\t>%-30s%s\n", RED, u_test->name, "[ABRT]");
		else if (status == SIGALRM)
			ft_printf("%s\t>%-30s%s\n", RED, u_test->name, "[TIMEOUT]");
	}
	ft_printf(WHITE);
}

int		display_test_count(t_test_counter *counter)
{
	ft_printf("%d/%d tests checked\n\n", counter->successful_tests,
										counter->total_tests);
	if (counter->successful_tests == counter->total_tests)
		return (0);
	else
		return (-1);
}

int		launch_tests(t_unit_test **testlist)
{
	pid_t			pid;
	t_unit_test		*current;
	int				status;
	t_test_counter	counter;

	ft_bzero((void *)&counter, sizeof(t_test_counter));
	current = *testlist;
	while (current)
	{
		if ((pid = fork()) == -1)
			error_exit("Error during fork");
		if (pid == 0)
		{
			alarm(5);
			exit(current->test_function());
		}
		else
		{
			wait(&status);
			display_status(status, current, &counter);
			current = current->next;
		}
	}
	delete_test_list(testlist);
	return (display_test_count(&counter));
}
