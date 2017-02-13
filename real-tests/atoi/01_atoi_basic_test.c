/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_basic_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:01:08 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 13:04:47 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	atoi_basic_test(void)
{
	char	*str;

	str = "1234567890";
	if (ft_atoi(str) != atoi(str))
		return (-1);
	str = "-0123456789";
	if (ft_atoi(str) != atoi(str))
		return (-1);
	return (0);
}
