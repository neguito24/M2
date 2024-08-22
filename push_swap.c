/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivera <anrivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:38:20 by anrivera          #+#    #+#             */
/*   Updated: 2024/08/22 14:11:24 by anrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack *head;
	char	**arr;

	if (argc == 1)
		exit(EXIT_FAILURE);
	ft_check_format_args(argc, argv);
	if (argc == 2)
	{
		arr = ft_split(argv[1], ' ');
		a = ft_init_stack(arr, 0, ft_count_nbr(arr), 'Y');
	}
	if (argc > 2)
		a = ft_init_stack(argv, 1, argc - 1, 'N');
		
	//if (a == NULL)
	//	ft_printf("No Stack");
	head = a;
	while (a -> next)
	{
		ft_printf("NUmber from stack o: %d \n", a -> nbr);
		a = a -> next;
	}
	
	 swap_stack(&head);
	while (head -> next)
	{
		ft_printf("NUmber from stack: %d \n", head -> nbr);
		head = head -> next;
	}
	ft_free_stack(&a);
	return (0);
}
