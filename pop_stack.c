/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:50:33 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:50:43 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pop_stack(t_stack *stack)
{
	t_node	*top;
	int		data;

	if (!stack->head)
		exit (1);
	top = stack->head;
	data = top->data;
	stack->head = top->next;
	free(top);
	top = NULL;
	stack->size--;
	return (data);
}
