/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stktop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:49:56 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/06 13:14:18 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_pair	ft_stktop(t_stack *s)
{
	t_pair	res;

	res.first = 0;
	res.second = 0;
	if (s->count)
	{
		res.second = 1;
		if (s->begin == 0)
			res.first = s->arr[s->size - 1];
		else
			res.first = s->arr[s->begin - 1];
	}
	return (res);
}
