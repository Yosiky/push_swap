/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:36:32 by eestelle          #+#    #+#             */
/*   Updated: 2022/03/05 17:29:57 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include <stdint.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# ifdef __linux__
#  include <malloc.h>
# else
#  include <stdlib.h>
# endif

typedef struct s_pair
{
	int64_t	first;
	int64_t	second;
}	t_pair;

typedef struct s_stack
{
	size_t	begin;
	size_t	end;
	size_t	count;
	size_t	size;
	int64_t	*arr;
}	t_stack;

t_stack	*ft_stknew(size_t size);
void	ft_stkpush(t_stack *stk, int64_t value, const char *str, size_t len);
int		ft_stkfind(t_stack *stk, int64_t value);
int		ft_stkclear(t_stack *stk);
int		ft_stk_checksort(t_stack *stk);
void	ft_stks(t_stack *stk, const char *str, size_t len);
void	ft_stkr(t_stack *stk, const char *str, size_t len);
void	ft_stkrr(t_stack *stk, const char *str, size_t len);
t_pair	ft_stkpop(t_stack *src);
t_pair	ft_stkmm(t_stack *s);
t_pair	ft_stktop(t_stack *s);
t_pair	ft_stkback(t_stack *s);

#endif
