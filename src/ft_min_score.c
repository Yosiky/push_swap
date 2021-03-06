/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_score.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:43:23 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/13 15:24:24 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int64_t	ft_min(int64_t a, int64_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int64_t	ft_max(int64_t a, int64_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

void	ft_min_score_a(t_stack *s, int64_t value, t_pair *score)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	while (i < s->count)
	{
		j = (s->end + i) % s->size;
		p = (s->end + i + 1) % s->size;
		++i;
		if (s->arr[j] > value && value > s->arr[p])
			break ;
	}
	score->first = s->count - i;
	score->second = i;
}

void	ft_min_score_b(t_stack *s, size_t value, t_pair *score)
{
	score->second = value + 1;
	score->first = s->count - score->second;
}

void	ft_optimization(t_score *s, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		s[i].sum = 0;
		s[i].score_ab.first = ft_min(s[i].score_a.first, s[i].score_b.first);
		s[i].score_ab.second = ft_min(s[i].score_a.second, s[i].score_b.second);
		s[i].sum = ft_max(s[i].score_a.first, s[i].score_b.first);
		s[i].sum = ft_min(s[i].sum,
				ft_max(s[i].score_a.second, s[i].score_b.second));
		s[i].sum = ft_min(s[i].score_a.first + s[i].score_b.first,
				s[i].score_a.second + s[i].score_b.second);
		s[i].sum = ft_min(s[i].sum, s[i].score_a.first + s[i].score_b.second);
		s[i].sum = ft_min(s[i].sum, s[i].score_b.first + s[i].score_a.second);
		++i;
	}
}
