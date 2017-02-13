/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strsplit_null_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:32:53 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 13:35:49 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strsplit_null_test(void)
{
	char	*str;
	char	**tmp;

	str = NULL;
	tmp = ft_strsplit(str, ' ');
	if (!tmp)
		return (0);
	else
		return (-1);
}
