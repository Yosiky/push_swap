/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:05:11 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/13 00:45:22 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_score	*ft_score_init(size_t size)
{
	t_score	*s;
	size_t	i;

	s = (t_score *)malloc(sizeof(t_score) * size);
	if (s == NULL)
	{
		free(s);
		s = NULL;
	}
	i = 0;
	while (i < size)
		ft_init_zero(s + i++);
	return (s);
}

int	ft_score_clear(t_score *s)
{
	if (s == NULL)
		return (0);
	free(s);
	return (0);
}
