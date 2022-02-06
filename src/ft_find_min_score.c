/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min_score.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:45:05 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/06 21:41:45 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

size_t	ft_find_min_score(t_score *s, t_stack *b)
{
	size_t	i;
	size_t	j;
	size_t	min;

	i = 1;
	min = b->end;
	while (i < b->count)
	{
		j = (b->end + i) % b->size;
		if (s[min].sum > s[j].sum)
			min = j;
		i++;
	}
	return (min);
}
