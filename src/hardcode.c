/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:18:00 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/05 18:57:16 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_size_three(t_stack *stk)
{
	int64_t	*arr;

	arr = stk->arr;
	if (arr[0] > arr[2] && arr[2] > arr[1])
		ft_stks(stk, "sa\n", 3);
	else if (arr[2] > arr[1] && arr[1] > arr[0])
	{
		ft_stks(stk, "sa\n", 3);
		ft_stkrr(stk, "rra\n", 4);
	}
	else if (arr[2] > arr[0] && arr[0] > arr[1])
		ft_stkr(stk, "ra\n", 3);
	else if (arr[1] > arr[0] && arr[0] > arr[2])
	{
		ft_stks(stk, "sa\n", 3);
		ft_stkr(stk, "ra\n", 3);
	}
	else if (arr[1] > arr[2] && arr[2] > arr[0])
		ft_stkrr(stk, "rra\n", 4);
}

void	ft_size_two(t_stack *stk)
{
	int64_t	*arr;

	arr = stk->arr;
	if (arr[1] > arr[0])
		ft_stks(stk, "sa\n", 3);
}
