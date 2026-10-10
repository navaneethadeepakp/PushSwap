/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:05:26 by naperisw          #+#    #+#             */
/*   Updated: 2025/03/19 11:45:42 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	letter;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	letter = (unsigned char)c;
	while (i < n)
	{
		if (letter == ptr[i])
			return ((void *) &ptr[i]);
		i++;
	}
	return (NULL);
}
