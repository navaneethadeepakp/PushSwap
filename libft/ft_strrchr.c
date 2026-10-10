/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:08:44 by naperisw          #+#    #+#             */
/*   Updated: 2025/03/19 11:50:02 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	letter;
	char	*ptr;

	i = 0;
	letter = (char)c;
	ptr = NULL;
	while (s[i] != '\0')
	{
		if (letter == s[i])
		{
			ptr = (char *) &s[i];
		}
		i++;
	}
	if (letter == s[i])
		return ((char *) &s[i]);
	return (ptr);
}
