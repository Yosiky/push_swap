/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:32:42 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/03 15:34:41 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

int	ft_lstclear(t_lst *ptr)
{
	t_lst	*head;

	while (ptr != NULL)
	{
		head = ptr->next;
		free(ptr);
		ptr = head;
	}
	return (0);
}
