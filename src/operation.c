/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:34:08 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/04 13:36:32 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

static void	ft_swap(int64_t *a, int64_t *b)
{
	int64_t	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_stks(t_stack *stk)
{
	if (stk->count >= 2) 
	{
		if (stk->begin != 0)
			ft_swap($(stk->arr[stk->begin]), &(stk->arr[stk->begin - 1]));
		else
			ft_swap($(stk->arr[0]), &(stk->arr[stk->size - 1]));
	}
}

void	ft_stkr(t_stack *stk)
{
	if (stk->count < 2)
		return ;
	if (stk->end == 0)
		stk->end = stk->size;
	stk->arr[--stk->end] = stk->arr[stk->begin--];
	if (stk->begin >= stk->size)
		stk->begin = stk->size - 1;
}

void	ft_stkrr(t_stack *stk)
{
	if (stk->count < 2)
		return ;
	if (stk->begin == stk->size)
		stk->begin = 0;
	stk->arr[stk->begin++] = stk->arr[stk->end++];
	if (stk->end == stk->size)
		stk->end = 0;
}

int64_t	ft_stkpop(t_stack *stk)
{
	//to do
	if (count == 0)
		return (0);
	return (1);
}
