/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:53:22 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:53:24 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack, int count)
{
	int	min_index;
	int	rotations;

	if (is_sorted(stack))
		return ;
	min_index = get_min_index(stack);
	rotations = count_rotations(stack->head, min_index);
	if (rotate_to_sort(stack, min_index))
	{
		if (rotations < count - rotations)
			rotate(stack, 'a', true);
		else
			reverse_rotate(stack, 'a', true);
	}
	else
	{
		swap(stack, 'a', true);
		if (is_sorted(stack))
			return ;
		if (rotations < count - rotations)
			rotate(stack, 'a', true);
		else
			reverse_rotate(stack, 'a', true);
	}
}
