/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:47:21 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 10:47:23 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_error(char *msg, bool flag)
{
	write(2, msg, ft_strlen(msg));
	if (flag == true)
		exit(1);
}
