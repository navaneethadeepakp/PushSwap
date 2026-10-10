/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:50:03 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/18 15:31:07 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		count_of_num;
	int		*num;

	if (argc == 1)
		return (0);
	count_of_num = input_check(argc, argv);
	if (count_of_num == -1)
		display_error("Error\n", 1);
	num = parse_argv(argc, argv, count_of_num);
	if (count_of_num <= 1 || check_duplicates(num, count_of_num))
	{
		free (num);
		if (count_of_num == 1)
			return (0);
		display_error("Error\n", 1);
	}
	populate_stack(&stack_a, &stack_b, num, count_of_num);
	sort_stack(&stack_a, &stack_b, num, count_of_num);
	free (num);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
