/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:50:17 by naperisw          #+#    #+#             */
/*   Updated: 2025/06/16 11:58:04 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*parse_argv(int argc, char **argv, int count)
{
	int		i;
	int		j;
	int		k;
	int		*num;
	char	**splited_num;

	i = 1;
	j = 0;
	num = (int *)malloc(sizeof(int) * count);
	if (!num)
		return (NULL);
	while (i < argc)
	{
		splited_num = ft_split(argv[i], 32);
		if (!splited_num)
			exit(EXIT_FAILURE);
		check_range(splited_num, num);
		k = 0;
		while (splited_num[k])
			num[j++] = ft_atoi(splited_num[k++]);
		free_double_pointer(splited_num);
		i++;
	}
	return (num);
}
