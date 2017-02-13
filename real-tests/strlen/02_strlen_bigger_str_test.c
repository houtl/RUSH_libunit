/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_bigger_str_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:41:36 by thou              #+#    #+#             */
/*   Updated: 2017/02/11 17:20:07 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strlen_bigger_str_test(void)
{
	char	*a;

	a = (char*)malloc(sizeof(char) * (1000001));
	memset(a, 'A', 1000000);
	a[1000001] = '\0';
	if (ft_strlen(a) == strlen(a))
		return (0);
	else
		return (-1);
}
