/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:52:00 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:52:14 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack, char c, bool flag)
{
	t_node	*curr;
	t_node	*tmp;

	if (!stack->head || !stack->head->next || !stack)
		return ;
	curr = stack->head;
	while (curr->next->next != NULL)
		curr = curr->next;
	tmp = curr->next;
	curr->next = NULL;
	tmp->next = stack->head;
	stack->head = tmp;
	if (flag)
	{
		write(1, "rr", 2);
		write(1, &c, 1);
		write(1, "\n", 1);
	}
}
