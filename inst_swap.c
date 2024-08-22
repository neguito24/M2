/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivera <anrivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:21:25 by anrivera          #+#    #+#             */
/*   Updated: 2024/08/22 14:19:55 by anrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_stack(t_stack **stack)
{
	t_stack	*head;

	if (stack == NULL || (*stack)->next == NULL)
		return ;
	head = *stack;
	*stack = (*stack)->next;
	head->next = (*stack)->next;
	head->prev = *stack;
	(*stack)->next = head;
	(*stack)->prev = NULL;
}
/*
static void	ft_s(t_list **stack)
{
	t_list	*tmp;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	sa(t_list **stack1)
{
	ft_s(stack1);
	write(1, "sa\n", 3);
}

void	sb(t_list **stack2)
{
	ft_s(stack2);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack1, t_list **stack2)
{
	ft_s(stack1);
	ft_s(stack2);
	write(1, "ss\n", 3);
}*/