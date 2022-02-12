/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle </var/spool/mail/eestelle>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:11:42 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/13 01:12:04 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	check_input_data(t_stack *stk, int count, char **str)
{
	int64_t	value;

	if (stk == NULL)
		return (0);
	while (count-- > 0)
	{
		if (ft_atoi(&value, str[count]))
			return (2);
		if (value <= -2147483649 || value >= 2147483648)
			return (3);
		if (ft_stkfind(stk, value))
			return (1);
		else
			ft_stkpush(stk, value, NULL, 0);
	}
	return (0);
}

void	ft_stk_offset(t_stack *s, int64_t offset)
{
	size_t	i;

	i = 0;
	while (i < s->size)
		s->arr[i++] += offset;
}

int	ft_check_sort(t_stack *stk)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	if (stk == NULL)
		return (0);
	while (i < stk->count - 1)
	{
		j = (stk->end + i) % stk->size;
		p = (stk->end + i + 1) % stk->size;
		if (stk->arr[j] < stk->arr[p])
			return (1);
		++i;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*stk;
	int64_t	offset;

	stk = ft_stknew(argc - 1);
	if (check_input_data(stk, argc - 1, argv + 1))
	{
		write(2, "Error\n", 6);
		ft_stkclear(stk);
	}
	if (ft_check_sort(stk))
	{
		offset = (ft_stkmm(stk)).first;
		if (offset < 0)
			ft_stk_offset(stk, -offset);
		if (argc == 3)
			ft_size_two(stk);
		else if (argc == 4)
			ft_size_three(stk);
		else
			ft_sort(stk);
		ft_offset(stk);
	}
	ft_stkclear(stk);
	return (0);
}
