/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:16:00 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/03 15:20:41 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib_mod.h"

int	ft_strcpy(char *res, char *src)
{
	if (res == NULL || src == NULL)
		return (0);
	while (*src != '\0')
		*(res++) = *(src++);
	return (0);
}
