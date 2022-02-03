#include "ft_push_swap.h"

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
			ft_stkpush(stk, value);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*stk;

	stk = ft_stknew(argc);
	if (check_input_data(stk, argc - 1, argv + 1))
		write(1, "Error\n", 6);
	else if (ft_stk_checksort(stk))
	{
		//ft_sort(&ptr_lst, &ptr_history);
		//optimization(&ptr_history);
	}
	ft_stkclear(stk);
	return (0);
}
