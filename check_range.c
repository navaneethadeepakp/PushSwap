/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:46:51 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/17 11:41:15 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_range(char **split_num, int *n)
{
	int	i;

	i = 0;
	while (split_num[i])
	{
		if (ft_atoll(split_num[i]) > INT_MAX || ft_atoll(split_num[i]) < INT_MIN
			|| ft_strlen(split_num[i]) > 11)
		{
			free_double_pointer(split_num);
			free(n);
			display_error("Error\n", 1);
		}
		i++;
	}
}
