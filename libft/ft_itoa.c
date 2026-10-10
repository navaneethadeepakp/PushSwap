/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:41:29 by naperisw          #+#    #+#             */
/*   Updated: 2025/03/19 11:54:57 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlength(int n)
{
	int		length;

	length = 0;
	if (n < 0)
	{
		length++;
		n = -n;
	}
	if (n == 0)
		length++;
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_alloc(int length)
{
	char	*str;

	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = 0;
	return (str);
}

void	ft_convert(char *str, long num, int length)
{
	int	i;

	i = length - 1;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		str[i--] = num % 10 + '0';
		num = num / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	num;

	num = n;
	if (num == 0)
	{
		str = ft_alloc(1);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	length = ft_numlength(num);
	str = ft_alloc(length);
	if (!str)
		return (NULL);
	ft_convert(str, num, length);
	str[length] = '\0';
	return (str);
}
