/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 12:54:45 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 17:57:18 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libunit.h"

int	main(void)
{
	int counter;

	counter = 0;
	header("Example tests");
	counter += strcapitalize_launcher();
	tail(counter);
	if (counter == 0)
		return (0);
	else
		return (-1);
}
