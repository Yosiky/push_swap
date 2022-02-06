/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_togher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:21:06 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/06 18:24:53 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_insert_rrr(t_stack *a, t_stack *b, int64_t count)
{
	while (count-- > 0)
	{
		ft_stkrr(a, NULL, 0);
		ft_stkrr(b, NULL, 0);
		write(1, "rrr\n", 4);
	}
}

void	ft_insert_rr(t_stack *a, t_stack *b, int64_t count)
{
	while (count-- > 0)
	{
		ft_stkr(a, NULL, 0);
		ft_stkr(b, NULL, 0);
		write(1, "rr\n", 3);
	}
}
