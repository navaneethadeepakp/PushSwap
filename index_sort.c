/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:48:34 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:48:36 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_sort(int num[], int count)
{
	int	i;
	int	j;
	int	min_ele;

	i = 1;
	while (i < count)
	{
		min_ele = num[i];
		j = i - 1;
		while (j >= 0 && num[j] > min_ele)
		{
			num[j + 1] = num[j];
			j = j - 1;
		}
		num[j + 1] = min_ele;
		i++;
	}
}
