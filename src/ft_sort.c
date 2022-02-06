/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:25:18 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/06 13:21:28 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static	t_stack	*ft_AtoB(t_stack *s, t_pair *mm)
{
	t_stack	*res;
	t_pair	top;
	t_pair	back;

	res = ft_stknew(s->size, 1);
	while (s->count != 3)
	{
		top = ft_stktop(s);
		if (top.second)
		{
			if (mm->first != top.first && mm->second != top.first)
			{
				top = ft_stkpop(s);
				if (top.second)
				{
					back = ft_stkback(res);
					ft_stkpush(res, top.first, "pb\n", 3);
					if (back.second && back.first > top.first)
						ft_stkrr(res, "rrb\n", 4);
				}
			}
			else
				ft_stkr(s, "ra\n", 3);
		}
	}
	return (res);
}

void	ft_sort(t_stack *sta)
{
	t_stack	*stb;
	t_pair	mm; // find min and max

	mm = ft_stkmm(sta);
	stb = ft_AtoB(sta, &mm);
	// delete
	printf("sta:\t");
	ft_print(sta);
	printf("stb:\t");
	ft_print(stb);
}
