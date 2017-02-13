/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strdup_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:47:57 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 12:32:57 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strdup_basic_test(void)
{
	char	*str;
	char	*dst;

	str = "so what's the test ?";
	dst = ft_strdup(str);
	if (!(strcmp(str, dst)))
		return (0);
	else
		return (-1);
}
