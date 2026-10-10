/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:48:55 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/17 12:57:47 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_token(const char *str, int *i)
{
	int	start ;

	while (str[*i] == ' ')
		(*i)++;
	if (str[*i] == '\0')
		return (0);
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i + 1] == '\0' || !ft_isdigit(str[*i + 1]))
			return (0);
		(*i)++;
	}
	start = *i;
	while (str[*i] && ft_isdigit(str[*i]))
		(*i)++;
	if (start == *i)
		return (0);
	if (str[*i] && str[*i] != ' ')
		return (0);
	return (1);
}

int	count_valid_numbers(const char *arg)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (arg[i])
	{
		while (arg[i] == ' ')
			i++;
		if (arg[i] == '\0')
			break ;
		if (!is_valid_token(arg, &i))
			return (-1);
		count++;
	}
	return (count);
}

int	input_check(int argc, char **argv)
{
	int	i;
	int	total_count;
	int	curr_count;

	i = 1;
	total_count = 0;
	while (i < argc)
	{
		curr_count = count_valid_numbers(argv[i]);
		if (curr_count < 0)
			return (-1);
		total_count += curr_count;
		i++;
	}
	return (total_count);
}
