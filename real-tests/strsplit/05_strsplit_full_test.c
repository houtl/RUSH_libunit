/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_strsplit_full_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:56:27 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 13:38:33 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strsplit_full_test(void)
{
	char	**ret;
	char	*str;
	char	**tmp;

	str = "11111111111111111111";
	ret = (char*[2]){str, NULL};
	tmp = ft_strsplit(str, '0');
	while (*tmp || *ret)
	{
		if (!(strcmp(*tmp, *ret)))
			return (0);
		tmp++;
		ret++;
	}
	return (-1);
}
