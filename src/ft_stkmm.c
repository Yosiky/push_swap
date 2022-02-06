/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkmm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:36:53 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/06 13:18:33 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_pair	ft_stkmm(t_stack *s)
{
	t_pair	mm;
	size_t	i;
	size_t	j;

	i = 0;
	mm.first = 0;
	mm.second = 0;
	if (s->count == 0)
		return (mm);
	mm.first = s->arr[s->end];
	mm.second = s->arr[s->end];
	while (i < s->count)
	{
		j = (s->end + i) % s->size;
		if (mm.first > s->arr[j])
			mm.first = s->arr[j];
		if (mm.second < s->arr[j])
			mm.second = s->arr[j];
		i++;
	}
	return (mm);
}
