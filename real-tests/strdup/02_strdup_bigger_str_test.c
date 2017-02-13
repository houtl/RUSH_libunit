/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strdup_bigger_str_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:47:28 by thou              #+#    #+#             */
/*   Updated: 2017/02/11 16:50:54 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strdup_bigger_str_test(void)
{
	char	*str;
	char	*dst;

	str = (char*)malloc(sizeof(char) * 1000001);
	memset(str, 'A', 1000000);
	dst = ft_strdup(str);
	if (!(strcmp(str, dst)))
		return (0);
	else
		return (-1);
}
