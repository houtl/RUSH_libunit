/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_atoi_overlong_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:26:08 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 15:57:38 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	atoi_overlong_test(void)
{
	char	*str;

	str = "99999999999999999999999999";
	if (ft_atoi(str) != atoi(str))
		return (-1);
	str = "-99999999999999999999999999";
	if (ft_atoi(str) != atoi(str))
		return (-1);
	return (0);
}
