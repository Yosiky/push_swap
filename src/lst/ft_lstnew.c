/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:22:49 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/03 17:03:07 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_lst	*ft_lstnew_int(void *value)
{
	t_lst	*ptr;

	if (value == NULL)
		return (NULL);
	ptr = (t_lst *)malloc(sizeof(t_lst));
	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->data.a = *((int64_t *)value);
	return (ptr);
}

t_lst	*ft_lstnew_char(void *value)
{
	t_lst	*ptr;

	if (value == NULL)
		return (NULL);
	ptr = (t_lst *)malloc(sizeof(t_lst));
	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	if (!ft_strcpy(ptr->data.b, (char *)value))
		return (ptr);
	free(ptr);
	return (NULL);
}

int	ft_lstadd(t_lst **ptr, t_lst *value)
{
	if (ptr == NULL)
		return (1);
	else if (*ptr != NULL)
	{
		if (value == NULL)
			return (2);
		else
			value->next = *ptr;
	}
	*ptr = value;
	return (0);
}
