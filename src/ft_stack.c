/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:53:36 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/04 13:08:00 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_stknew(size_t size)
{
	t_stack	*stk;

	stk = (t_stack *)malloc(sizeof(t_stack));
	if (stk == NULL)
		return (NULL);
	stk->count = 0;
	stk->begin = 0;
	stk->end = 0;
	stk->size = size;
	stk->arr = (int64_t *)malloc(sizeof(int64_t));
	if (stk->arr == NULL)
	{
		free(stk);
		stk = NULL;
	}
	return (stk);
}

void	ft_stkpush(t_stack *stk, int64_t value)
{
	stk->count++;
	if (stk->begin == stk->size)
		stk->begin = 0;
	stk->arr[stk->begin++] = value;
}

int	ft_stkfind(t_stack *stk, int64_t value)
{
	size_t	i;

	i = 0;
	while (i < stk->begin)
	{
		if (stk->arr[i] == value)
			return (1);
		i++;
	}
	return (0);
}

int	ft_stkclear(t_stack *stk)
{
	if (stk != NULL)
	{
		if (stk->arr != NULL)
			free(stk->arr);
		free(stk);
	}
	return (0);
}

int	ft_stk_checksort(t_stack *stk)
{
	size_t	i;

	if (stk == NULL)
		return (0);
	if (stk->arr == NULL)
		return (0);
	i = stk->begin;
	while (i-- > 1)
	{
		if (stk->arr[i] > stk->arr[i - 1])
			return (1);
	}
	return (0);
}
