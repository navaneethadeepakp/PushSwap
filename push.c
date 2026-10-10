/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:51:54 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:51:56 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack_1, t_stack *stack_2, char c, bool flag)
{
	int	index;

	if (stack_2->head == NULL)
		return ;
	index = stack_2->head->s_index;
	push_stack(stack_1, index, pop_stack(stack_2));
	if (flag)
	{
		write(1, "p", 1);
		write(1, &c, 1);
		write (1, "\n", 1);
	}
}
