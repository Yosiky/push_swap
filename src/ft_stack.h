/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:36:32 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/03 18:16:12 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include <stdint.h>
# include <stddef.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct s_stack
{
	size_t	begin;
	size_t	end;
	size_t	size;
	int64_t	*arr;
}	t_stack;

t_stack	*ft_stknew(size_t size);
void	*ft_stkpush(int64_t	value);
int		ft_stkfind(t_stack *stk, int64_t value);
int		ft_stkclear(t_stack *stk);
int		ft_stk_checksort(t_stack *stk);

#endif