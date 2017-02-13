/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strsplit_basic_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:54:56 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 13:37:31 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strsplit_basic_test(void)
{
	char	**ret;
	char	**tmp;
	char	*str;

	str = "  split      this       for me                         ! ";
	ret = (char*[6]){"split", "this", "for", "me", "!", NULL};
	tmp = ft_strsplit(str, ' ');
	while (*tmp && *ret)
	{
		if (!(strcmp(*tmp, *ret)))
			return (0);
		tmp++;
		ret++;
	}
	return (-1);
}
