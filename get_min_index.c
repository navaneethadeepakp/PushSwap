/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:48:23 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:48:25 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_index(t_stack *stack)
{
	t_node	*curr;
	int		min_index;

	curr = stack->head;
	min_index = curr->s_index;
	while (curr->next)
	{
		curr = curr->next;
		if (curr->s_index < min_index)
			min_index = curr->s_index;
	}
	return (min_index);
}
