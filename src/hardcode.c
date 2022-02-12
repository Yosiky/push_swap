/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:18:00 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/13 01:29:25 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int64_t	*init(t_stack *s, size_t *b, size_t *e, size_t *c)
{
	*b = s->begin - 1;
	*e = s->end;
	if (s->begin == 0)
		*b = s->size - 1;
	*c = *b - 1;
	if (s->begin == 1)
		*c = s->size - 1;
	return (s->arr);
}

void	ft_size_three(t_stack *stk)
{
	int64_t	*arr;
	size_t	begin;
	size_t	end;
	size_t	center;

	arr = init(stk, &begin, &end, &center);
	if (arr[end] > arr[begin] && arr[begin] > arr[center])
		ft_stks(stk, "sa\n", 3);
	else if (arr[begin] > arr[center] && arr[center] > arr[end])
	{
		ft_stks(stk, "sa\n", 3);
		ft_stkrr(stk, "rra\n", 4);
	}
	else if (arr[begin] > arr[end] && arr[end] > arr[center])
		ft_stkr(stk, "ra\n", 3);
	else if (arr[center] > arr[end] && arr[end] > arr[begin])
	{
		ft_stks(stk, "sa\n", 3);
		ft_stkr(stk, "ra\n", 3);
	}
	else if (arr[center] > arr[begin] && arr[begin] > arr[end])
		ft_stkrr(stk, "rra\n", 4);
}

void	ft_size_two(t_stack *stk)
{
	int64_t	*arr;

	arr = stk->arr;
	if (arr[1] > arr[0])
		ft_stks(stk, "sa\n", 3);
}
