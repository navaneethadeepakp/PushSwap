/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_rotations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:47:08 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:47:10 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_rotations(t_node *stack, int min_index)
{
	int	counter;

	counter = 0;
	while (stack && stack->s_index != min_index)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}
