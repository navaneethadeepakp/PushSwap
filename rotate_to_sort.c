/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_to_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:52:45 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 11:01:48 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_to_sort(t_stack *stack, int min_index)
{
	int	a;
	int	b;
	int	c;

	(void)min_index;
	a = stack->head->data;
	b = stack->head->next->data;
	c = stack->head->next->next->data;
	if (a < b && b < c)
		return (1);
	if (b < c && a > c)
		return (1);
	if (c < a && a < b)
		return (1);
	return (0);
}
