/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:45:19 by eestelle          #+#    #+#             */
/*   Updated: 2022/03/05 18:40:57 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# ifdef __linux__
#  include <malloc.h>
# else
#  include <stdlib.h>
# endif
# include <stdint.h>
# include "ft_stack.h"

//delete
# include <stdio.h>

typedef struct s_score
{
	t_pair	score_ab;
	t_pair	score_a;
	t_pair	score_b;
	int64_t	sum;
}	t_score;

int64_t	ft_min(int64_t a, int64_t b);
int64_t	ft_max(int64_t a, int64_t b);
int		ft_atoi(int64_t *ptr_res, char *str);
void	ft_size_three(t_stack *stk);
void	ft_size_two(t_stack *stk);
int		ft_sort(t_stack *stk);
void	ft_min_score_a(t_stack *s, int64_t value, t_pair *score);
void	ft_min_score_b(t_stack *s, size_t value, t_pair *score);
t_score	*ft_score_init(size_t size);
void	ft_init_zero(t_score *s);
int		ft_score_clear(t_score *score);
void	ft_optimization(t_score *score, size_t size);
size_t	ft_find_min_score(t_score *score, t_stack *stk);
void	ft_insert(t_stack *a, t_stack *b, t_score *score);
void	ft_insert_rrr(t_stack *a, t_stack *b, int64_t count);
void	ft_insert_rr(t_stack *a, t_stack *b, int64_t count);
void	ft_insert_rn(t_stack *s, int64_t count, const char *str, size_t len);
void	ft_insert_rrn(t_stack *s, int64_t count, const char *str, size_t len);
void	ft_offset(t_stack *s);
char	**ft_split(char *str, char c, int *len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	free_arr_string(char **str);

#endif
