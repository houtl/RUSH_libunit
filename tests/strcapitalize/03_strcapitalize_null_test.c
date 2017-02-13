/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strcapitalize_null_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:20:55 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 15:24:41 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strcapitalize_null_test(void)
{
	char *str;

	str = NULL;
	if (ft_strcapitalize(str) == NULL)
		return (0);
	else
		return (-1);
}
