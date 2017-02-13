/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_unicode_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:41:55 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 18:41:33 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strlen_unicode_test(void)
{
	char	*a;

	a = "侮僧免勉勤卑喝嘆器塀墨層屮悔慨憎";
	if (ft_strlen(a) == strlen(a))
		return (0);
	else
		return (-1);
}
