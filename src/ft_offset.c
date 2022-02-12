/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_offset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:41:09 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/13 01:24:33 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_pair	ft_check_count(t_stack *s, int64_t min)
{
	size_t	i;
	t_pair	res;

	res.first = 0;
	res.second = 0;
	i = 0;
	while (i < s->count)
	{
		if (min == s->arr[(s->end + i) % s->size])
			break ;
		i++;
	}
	res.second = i + 1;
	res.first = s->count - res.second;
	return (res);
}

void	ft_offset(t_stack *s)
{
	t_pair	mm;
	t_pair	count;

	mm = ft_stkmm(s);
	count = ft_check_count(s, mm.first);
	if (count.first < count.second)
		ft_insert_rn(s, count.first, "ra\n", 3);
	else
		ft_insert_rrn(s, count.second, "rra\n", 4);
}
