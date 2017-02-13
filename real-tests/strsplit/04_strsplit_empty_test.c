/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strsplit_empty_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:49:14 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 13:38:07 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strsplit_empty_test(void)
{
	char	*str;
	char	**ret;
	char	**tmp;

	str = "";
	ret = (char*[2]){NULL};
	tmp = ft_strsplit(str, ' ');
	while (*tmp)
	{
		if (strcmp(*tmp, *ret))
			return (-1);
	}
	return (0);
}
