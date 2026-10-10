/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:30:09 by naperisw          #+#    #+#             */
/*   Updated: 2025/03/19 11:47:55 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	letter;

	i = 0;
	letter = (char)c;
	while (s[i] != '\0')
	{
		if (letter == s[i])
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (letter == s[i])
		return ((char *) &s[i]);
	return (NULL);
}
