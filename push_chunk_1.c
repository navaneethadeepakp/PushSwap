/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:49:36 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 13:27:43 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_chunk_1(t_stack *stack_a, t_stack *stack_b, int count)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(count) * 14 / 10;
	while (stack_a->head)
	{
		if (stack_a->head->s_index <= i)
		{
			push(stack_b, stack_a, 'b', true);
			rotate(stack_b, 'b', true);
			i++;
		}
		else if (stack_a->head->s_index <= i + range)
		{
			push(stack_b, stack_a, 'b', true);
			i++;
		}
		else
			rotate(stack_a, 'a', true);
	}
}
