/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:18:05 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/06 15:01:07 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_print(t_stack *stk)
{
	for (size_t i = 0; i < stk->count; i++)
	{
		printf("%ld\t", stk->arr[(stk->end + i) % stk->size]);
	}
	printf("\n");
}

void	ft_print_arr(t_stack *stk)
{
	for (size_t i = 0; i < stk->size; i++)
	{
		printf("%ld\t", stk->arr[i]);
	}
	printf("\n");
}

static int	check_input_data(t_stack *stk, int count, char **str)
{
	int64_t	value;

	while (count-- > 0)
	{
		if (ft_atoi(&value, str[count]))
			return (2);
		if (ft_stkfind(stk, value))
			return (1); 
		else
			ft_stkpush(stk, value, NULL, 0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*stk;

	stk = ft_stknew(argc - 1);
	if (stk == NULL)
		return (1 || write(1, "Error\n", 6));
	if (check_input_data(stk, argc - 1, argv + 1))
		write(1, "Error\n", 6);
	if (argc > 2)
	{
		if (argc == 3)
			ft_size_two(stk);
		else if (argc == 4)
			ft_size_three(stk);
	else
		ft_sort(stk);
	}
		//ft_sort(&ptr_lst, &ptr_history);
		//optimization(&ptr_history);
	ft_print(stk);
	ft_stkclear(stk);
	return (0);
}
