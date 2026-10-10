/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:22:59 by naperisw          #+#    #+#             */
/*   Updated: 2025/03/19 11:44:48 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*pointer;
	size_t			i;

	i = 0;
	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	while (i < count * size)
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
