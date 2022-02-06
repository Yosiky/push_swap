/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_r_rr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:31:16 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/06 18:38:46 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_insert_rn(t_stack *s, int64_t count, const char *str, size_t len)
{
	while (count-- > 0)
		ft_stkr(s, str, len);
}

void	ft_insert_rrn(t_stack *s, int64_t count, const char *str, size_t len)
{
	while (count-- > 0)
		ft_stkrr(s, str, len);
}
