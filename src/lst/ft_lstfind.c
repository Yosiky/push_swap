/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:49:43 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/03 15:52:04 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_lst	*ft_lstfind(t_lst *ptr, int64_t value)
{
	while (ptr != NULL)
	{
		if (ptr->data.a == value)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}
