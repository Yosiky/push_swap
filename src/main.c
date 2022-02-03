/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:22:36 by eestelle          #+#    #+#             */
/*   Updated: 2022/02/03 16:01:09 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	check_input_data(t_list **ptr, int count, char **str)
{
	int64_t	value;

	while (count-- > 0)
	{
		if (ft_atoi(&value, str[count]) || ft_lstfind(*ptr, value) != NULL)
			return (1 || ft_lstclear(*ptr));
		if (!ft_lstadd(ptr, ft_lstnew_int((void *)(&value))))
			return (1 || ft_lstclear(*ptr));
	}
	return (0);
}

static int	check_lst_sort(t_lst *ptr)
{
	int	value;

	if (ptr == NULL)
		return (1);
	value = ptr->data.a;
	while (ptr != NULL)
	{
		if (value < ptr->data.a)
			return (2);
		value = ptr->data.a;
		ptr = ptr->next;
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
	else if (!check_lst_sort(ptr_lst))
	{
		write(1, "// to do\n", 9);
		//ft_sort(&ptr_lst, &ptr_history);
		//optimization(&ptr_history);
	}
	return (0);
}
