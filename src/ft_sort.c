/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle </var/spool/mail/eestelle>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:26:50 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/13 01:27:04 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static	t_stack	*ft_atob(t_stack *s, t_pair *mm)
{
	t_stack	*res;
	t_pair	top;

	res = ft_stknew(s->size);
	if (res == NULL)
		return (res);
	while (s->count != 3)
	{
		top = ft_stktop(s);
		if (top.second && mm->first != top.first && mm->second != top.first)
		{
			ft_stkpop(s);
			ft_stkpush(res, top.first, "pb\n", 3);
		}
		else
			ft_stkr(s, "ra\n", 3);
	}
	return (res);
}

static int	ft_btoa(t_stack *b, t_stack *a)
{
	size_t	i;
	size_t	j;
	t_score	*score;

	score = ft_score_init(b->size);
	if (score == NULL)
		return (1);
	while (b->count)
	{
		i = 0;
		while (i < b->count)
		{
			j = (b->end + i) % b->size;
			ft_min_score_a(a, b->arr[j], &(score[j].score_a));
			ft_min_score_b(b, i, &(score[j].score_b));
			i++;
		}
		ft_optimization(score, b->size);
		j = ft_find_min_score(score, b);
		ft_insert(a, b, &score[j]);
	}
	ft_score_clear(score);
	return (0);
}

int	ft_sort(t_stack *sta)
{
	t_stack	*stb;
	t_pair	mm;

	mm = ft_stkmm(sta);
	stb = ft_atob(sta, &mm);
	ft_size_three(sta);
	if (stb == NULL)
		return (1);
	if (ft_btoa(stb, sta))
		return (!ft_stkclear(stb));
	ft_stkclear(stb);
	return (0);
}
