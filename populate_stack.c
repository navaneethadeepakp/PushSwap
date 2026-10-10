/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:50:53 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/18 12:17:31 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	populate_stack(t_stack *stack_a, t_stack *stack_b, int *num, int c)
{
	int		i;
	t_node	*tmp;

	stack_a->head = NULL;
	stack_b->head = NULL;
	stack_a->size = 0;
	stack_b->size = 0;
	i = c - 1;
	while (i >= 0)
	{
		push_stack(stack_a, 0, num[i]);
		i--;
	}
	index_sort(num, c);
	tmp = stack_a->head;
	while (tmp)
	{
		tmp->s_index = find_index(tmp->data, num);
		tmp = tmp->next;
	}
}
