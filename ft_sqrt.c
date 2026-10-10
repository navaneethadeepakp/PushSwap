/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:56:07 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:56:10 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int length)
{
	int	i;

	if (length < 4)
		return (1);
	i = 2;
	while (i * i < length)
		i++;
	if (i * i > length)
	{
		if ((i * i - length) < ((i - 1) * (i - 1) + (-length)))
			return (i);
	}
	return (i - 1);
}
