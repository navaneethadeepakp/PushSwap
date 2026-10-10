/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:53:08 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/17 12:41:13 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack *stack_a, t_stack *stack_b, int *num, int count)
{
	if (is_sorted(stack_a))
	{
		free(num);
		free_stack(stack_a);
		free_stack(stack_b);
		exit(0);
	}
	else if (count == 2)
		swap(stack_a, 'a', true);
	else if (count == 3)
		sort_three(stack_a, count);
	else if (count <= 7)
		sort_seven(stack_a, stack_b, count);
	else if (count > 7)
	{
		push_chunk_1(stack_a, stack_b, count);
		push_chunk_2(stack_a, stack_b, count);
	}
	else
		display_error("", 1);
}
