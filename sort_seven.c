/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:49:08 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 13:03:35 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_seven(t_stack *stack_a, t_stack *stack_b, int count)
{
	int	min_index;
	int	pass;
	int	length;

	pass = 0;
	length = count;
	while (pass++ < length - 3)
	{
		min_index = get_min_index(stack_a);
		if (count_rotations(stack_a->head, min_index) <= length - min_index
			-count_rotations(stack_a->head, min_index))
			while (stack_a->head->s_index != min_index)
				rotate(stack_a, 'a', true);
		else
			while (stack_a->head->s_index != min_index)
				reverse_rotate(stack_a, 'a', true);
		if (is_sorted(stack_a) && stack_b->size == 0)
			return ;
		push(stack_b, stack_a, 'b', true);
		count--;
	}
	sort_three(stack_a, count);
	pass = 0;
	while (pass++ < length - 3)
		push(stack_a, stack_b, 'a', true);
}
