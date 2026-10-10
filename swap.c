/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:53:33 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:53:36 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack, char c, bool flag)
{
	t_node	*tmp;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	tmp = stack->head;
	stack->head = tmp->next;
	tmp->next = stack->head->next;
	stack->head->next = tmp;
	if (flag)
	{
		write(1, "s", 1);
		write(1, &c, 1);
		write(1, "\n", 1);
	}
}
