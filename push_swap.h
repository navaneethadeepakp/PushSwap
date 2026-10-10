/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:51:38 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/18 12:17:10 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdint.h>

typedef struct s_node
{
	int				data;
	int				s_index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	int		size;
}	t_stack;

int			check_duplicates(int *num, int count);
void		check_range(char **split_num, int *n);
int			count_rotations(t_node *stack, int min_index);
void		display_error(char *msg, bool flag);
int			find_index(int n, int *num);
void		free_double_pointer(char **str);
void		free_stack(t_stack *stack);
int			get_min_index(t_stack *stack);
void		index_sort(int	*num, int count);
int			input_check(int argc, char **argv);
void		sort_seven(t_stack *stack_a, t_stack *stack_b, int count);
int			is_sorted(t_stack *stack);
void		push_chunk_1(t_stack *stack_a, t_stack *stack_b, int count);
void		push_chunk_2(t_stack *stack_a, t_stack *stack_b, int count);
int			main(int argc, char **argv);
int			*parse_argv(int argc, char **argv, int count);
int			pop_stack(t_stack *stack);
void		populate_stack(t_stack *stack_a, t_stack *stack_b, int *num, int c);
void		push_stack(t_stack	*stack, int index, int data);
void		push(t_stack *stack_1, t_stack *stack_2, char c, bool flag);
void		reverse_rotate(t_stack *stack, char c, bool flag);
int			rotate_to_sort(t_stack *stack, int min_index);
void		rotate(t_stack *stack, char c, bool flag);
void		sort_stack(t_stack *stack_a, t_stack *stack_b, int *num, int count);
void		sort_three(t_stack *stack, int count);
void		swap(t_stack *stack, char c, bool flag);
long long	ft_atoll(char *str);
int			ft_sqrt(int length);

#endif