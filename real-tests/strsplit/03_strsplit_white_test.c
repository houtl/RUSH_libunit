/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strsplit_white_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:44:07 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 13:37:10 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

int	strsplit_white_test(void)
{
	char	**tmp;
	char	**ret;

	ret = (char*[1]){NULL};
	tmp = ft_strsplit("                  ", ' ');
	while (*tmp)
	{
		if (strcmp(*tmp, *ret))
			return (-1);
	}
	return (0);
}
