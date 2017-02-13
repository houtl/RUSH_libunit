/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strcapitalize_litteral_test.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:23:01 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 15:24:46 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strcapitalize_litteral_test(void)
{
	if (!(strcmp(ft_strcapitalize("allo"), "ALLO")))
		return (0);
	else
		return (-1);
}
