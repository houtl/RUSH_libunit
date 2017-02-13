/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:57:55 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 17:59:39 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libunit.h"

int	main(void)
{
	int counter;

	counter = 0;
	header("Libf tests");
	counter += strlen_launcher();
	counter += strdup_launcher();
	counter += strsplit_launcher();
	counter += atoi_launcher();
	tail(counter);
	if (counter == 0)
		return (0);
	return (-1);
}
