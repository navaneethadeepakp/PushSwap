/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:48:29 by naperisw          #+#    #+#             */
/*   Updated: 2025/03/19 13:52:01 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;
	unsigned char	letter;

	s = b;
	letter = (char)c;
	i = 0;
	while (i < len)
	{
		s[i] = letter;
		i++;
	}
	return (b);
}
