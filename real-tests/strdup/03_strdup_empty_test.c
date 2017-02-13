/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:41:14 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 11:27:25 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strdup_empty_test(void)
{
	char	*str;
	char	*dst;

	str = "";
	dst = ft_strdup(str);
	if (!(strcmp(str, dst)))
		return (0);
	else
		return (-1);
}
