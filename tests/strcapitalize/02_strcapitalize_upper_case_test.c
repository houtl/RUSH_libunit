/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcapitalize_upper_case_test.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:19:37 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 19:04:49 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strcapitalize_upper_case_test(void)
{
	char str[5];

	str[0] = 'A';
	str[1] = 'L';
	str[2] = 'L';
	str[3] = 'O';
	str[4] = '\0';
	if (!(strcmp(ft_strcapitalize(str), "ALLO")))
		return (0);
	else
		return (-1);
}
