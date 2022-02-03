#include "ft_push_swap.h"

static int	check_input_data(t_list **ptr, int count, char **str)
{
	int64_t	value;

	while (count-- > 0)
	{
		if (ft_atoi(&value, str[count]) || ft_lstfind(*ptr, value) != NULL)
			return (1 || ft_lstdel(lst)); 
		else 
			ft_lstadd(ptr, value);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*ptr_lst;
	t_list	*ptr_history;

	ptr_lst = NULL;
	if (check_input_data(&ptr_lst, argc, argv))
		write(1, "Error\n", 6);
	else if (check_lst_sort(ptr_lst))
	{
		ft_sort(&ptr_lst, &ptr_history);
		optimization(&ptr_history);
	}
	return (0);
}
