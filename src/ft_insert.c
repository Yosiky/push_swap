/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:56:45 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/13 00:56:57 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_init_zero(t_score *s)
{
	s->score_ab.first = 0;
	s->score_ab.second = 0;
	s->score_b.first = 0;
	s->score_b.second = 0;
	s->score_a.first = 0;
	s->score_a.second = 0;
	s->sum = 0;
}

static void	ft_update_sum(t_score *s)
{
	s->sum = s->score_ab.first + s->score_ab.second;
	s->sum += s->score_b.first + s->score_b.second;
	s->sum += s->score_a.first + s->score_a.second;
}

static void	ft_copy(t_score *s, t_pair *a1, t_pair *a2, t_pair *b1, t_pair *b2)
{
	ft_init_zero(s);
	a1->first = a2->first;
	b1->second = b2->second;
}

static void	ft_copy_min_way(t_score *r, t_score *s)
{
	ft_init_zero(r);
	if (s->score_a.first < s->score_a.second)
		r->score_a.first = s->score_a.first;
	else
		r->score_a.second = s->score_a.second;
	if (s->score_b.first < s->score_b.second)
		r->score_b.first = s->score_b.first;
	else
		r->score_b.second = s->score_b.second;
	ft_update_sum(r);
	if (r->sum > s->score_a.first + s->score_b.second)
		ft_copy(r, &r->score_a, &s->score_a, &r->score_b, &s->score_b);
	ft_update_sum(r);
	if (r->sum > s->score_b.first + s->score_a.second)
		ft_copy(r, &r->score_b, &s->score_b, &r->score_a, &s->score_a);
	ft_update_sum(r);
	if (r->sum > ft_max(s->score_a.first, s->score_b.first))
	{
		ft_init_zero(r);
		r->score_ab.first = ft_min(s->score_a.first, s->score_b.first);
		r->score_a.first = s->score_a.first - r->score_ab.first;
		r->score_b.first = s->score_b.first - r->score_ab.first;
	}
	ft_update_sum(r);
	if (r->sum > ft_max(s->score_a.second, s->score_b.second))
	{
		ft_init_zero(r);
		r->score_ab.second = ft_min(s->score_a.second, s->score_b.second);
		r->score_a.second = s->score_a.second - r->score_ab.second;
		r->score_b.second = s->score_b.second - r->score_ab.second;
	}
}

void	ft_insert(t_stack *a, t_stack *b, t_score *s)
{
	t_pair	top;
	t_score	r;

	ft_copy_min_way(&r, s);
	ft_insert_rr(a, b, r.score_ab.first);
	ft_insert_rrr(a, b, r.score_ab.second);
	ft_insert_rn(a, r.score_a.first, "ra\n", 3);
	ft_insert_rn(b, r.score_b.first, "rb\n", 3);
	ft_insert_rrn(a, r.score_a.second, "rra\n", 4);
	ft_insert_rrn(b, r.score_b.second, "rrb\n", 4);
	top = ft_stkpop(b);
	if (top.second)
		ft_stkpush(a, top.first, "pa\n", 3);
}
