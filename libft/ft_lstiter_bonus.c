/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 08:55:53 by naperisw          #+#    #+#             */
/*   Updated: 2025/03/19 11:43:43 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*linkptr;

	linkptr = lst;
	if (lst == NULL)
		return ;
	while (linkptr != NULL)
	{
		(*f)(linkptr->content);
		linkptr = linkptr->next;
	}
}
