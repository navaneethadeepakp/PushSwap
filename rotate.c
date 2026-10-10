/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:52:34 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:52:37 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack, char c, bool flag)
{
	t_node	*tmp;
	t_node	*curr;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	tmp = stack->head;
	stack->head = tmp->next;
	curr = stack->head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = tmp;
	tmp->next = NULL;
	if (flag)
	{
		write(1, "r", 1);
		write(1, &c, 1);
		write(1, "\n", 1);
	}
}
