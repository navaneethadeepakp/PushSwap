/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_chunk_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:49:47 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/18 11:12:54 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_chunk_2(t_stack *stack_a, t_stack *stack_b, int count)
{
	int	rb_count;
	int	rrb_count;

	while (count - 1 >= 0)
	{
		rb_count = count_rotations(stack_b->head, count - 1);
		rrb_count = (count) - rb_count;
		if (rb_count <= rrb_count)
		{
			while (stack_b->head->s_index != count - 1)
				rotate(stack_b, 'b', true);
			push(stack_a, stack_b, 'a', true);
			count--;
		}
		else
		{
			while (stack_b->head->s_index != count - 1)
				reverse_rotate(stack_b, 'b', true);
			push(stack_a, stack_b, 'a', true);
			count--;
		}
	}
}
