/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:30:15 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/03 15:24:11 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

# include <stdint.h>
# include "../lib/ft_lib_mod.h"

typedef	union u_int64_char
{
	int64_t	a;
	char	b[8];
}	t_int64_char;

typedef struct s_lst
{
	t_int64_char	data;
	struct s_lst	*next;
}	t_lst;

t_lst	*ft_lstnew_int(void *value);
t_lst	*ft_lstnew_char(void *value);
void	ft_lstadd(t_lst **ptr, t_lst *value);
int		ft_lstclear(t_lst *ptr);

#endif
