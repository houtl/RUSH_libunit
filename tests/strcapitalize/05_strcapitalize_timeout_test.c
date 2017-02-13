/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_strcapitalize_timeout_test.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:27:31 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 17:31:07 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strcapitalize_timeout_test(void)
{
	char	str[4];
	int		i;

	i = 0;
	while (i < 4)
		str[i] = 'a';
	if (!(strcmp(ft_strcapitalize(str), "AAAA")))
		return (0);
	else
		return (-1);
}
