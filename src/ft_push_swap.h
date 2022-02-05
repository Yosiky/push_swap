#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <malloc.h>
# include <stdint.h>
# include "ft_stack.h"

int		ft_atoi(int64_t *ptr_res, char *str);
void	ft_size_three(t_stack *stk);
void	ft_size_two(t_stack *stk);
void	ft_sort(t_stack *stk);

#endif
