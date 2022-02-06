/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:05:11 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/06 16:07:09 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_score	*ft_score_init(size_t size)
{
	t_score	*s;

	s = (t_score *)malloc(sizeof(t_score) * size);
	if (s == NULL)
	{
		free(s);
		s = NULL;
	}
	return (s);
}

int	ft_score_clear(t_score *s)
{
	if (s == NULL)
		return (0);
	free(s);
	return (0);
}
