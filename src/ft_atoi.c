/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle </var/spool/mail/eestelle>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:13:26 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/13 01:20:32 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_isspace(char c)
{
	return (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ');
}

static int	ft_isnum(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_atoi(int64_t *ptr_res, char *res)
{
	int64_t	sign;

	sign = 1;
	*ptr_res = 0;
	while (ft_isspace(*res))
		res++;
	if (*res == '-')
	{
		++res;
		sign *= -1;
	}
	if (*res == '\0')
		return (4);
	while (*res != '\0')
	{
		if (ft_isnum(*res))
			*ptr_res = *ptr_res * 10 + *res - '0';
		else
			return (2);
		if (*ptr_res < 0)
			return (3);
		res++;
	}
	*ptr_res *= sign;
	return (0);
}
