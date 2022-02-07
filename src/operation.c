/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:34:08 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/07 17:38:55 by eestelle         ###   ########.fr       */
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

void	ft_stks(t_stack *stk, const char *str, size_t len)
{
	if (stk->count >= 2) 
	{
		if (stk->begin == 0)
			ft_swap(&(stk->arr[stk->size - 2]), &(stk->arr[stk->size - 1]));
		else if (stk->begin == 1)
			ft_swap(&(stk->arr[0]), &(stk->arr[stk->size - 1]));
		else
			ft_swap(&(stk->arr[stk->begin - 2]), &(stk->arr[stk->begin - 1]));
		if (str != NULL)
			write(1, str, len);
	}
}

void	ft_stkr(t_stack *stk, const char *str, size_t len)
{
	if (stk->count < 2)
		return ;
	if (stk->end == 0)
		stk->end = stk->size;
	if (stk->begin == 0)
		stk->begin = stk->size;
	stk->arr[--stk->end] = stk->arr[--stk->begin];
	if (str != NULL)
		write(1, str, len);
}

void	ft_stkrr(t_stack *stk, const char *str, size_t len)
{
	if (stk->count < 2)
		return ;
	if (stk->begin == stk->size)
		stk->begin = 0;
	stk->arr[stk->begin++] = stk->arr[stk->end++];
	if (stk->end == stk->size)
		stk->end = 0;
	if (str != NULL)
		write(1, str, len);
}

t_pair	ft_stkpop(t_stack *src)
{
	t_pair	ret;

	if (src == NULL || src->count == 0)
	{
		ret.first = 0;
		ret.second = 0;
	}
	else
	{
		--src->count;
		if (src->begin == 0)
			src->begin = src->size;
		ret.first = src->arr[--src->begin];
		ret.second = 1;
	}
	return (ret);
}
