/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcapitalize_lower_case_test.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:20:00 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 19:12:00 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strcapitalize_lower_case_test(void)
{
	char str[5];

	str[0] = 'a';
	str[1] = 'l';
	str[2] = 'l';
	str[3] = 'o';
	str[4] = '\0';
	if (!(strcmp(ft_strcapitalize(str), "ALLO")))
		return (0);
	else
		return (-1);
}
