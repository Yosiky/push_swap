/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkback.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:07:53 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/06 13:15:07 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_pair	ft_stkback(t_stack *s)
{
	t_pair	res;

	res.first = 0;
	res.second = 0;
	if (s->count)
	{
		res.first = s->arr[s->end];
		res.second = 1;
	}
	return (res);

}
