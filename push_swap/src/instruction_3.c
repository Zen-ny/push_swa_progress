/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:01:29 by naadam            #+#    #+#             */
/*   Updated: 2023/04/17 17:09:01 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(stack_a) < 2 || ft_lstsize(stack_b) < 2)
		return (-1);
	swap(stack_a);
	swap(stack_b);
	return (0);
}

// Reverse Rotate

int	reverse(t_list **stack)
{
	t_list	*head;
	t_list	*tail;
	t_list	*tmp;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	tmp = head;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tmp = tmp->next;
	*stack = tail;
	return (0);
}

int	rra(t_list **stack_a)
{
	if (reverse(stack_a) == -1)
		return (-1);
	ft_putendl_fd(rra, 1);
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (reverse(stack_b) == -1)
		return (-1);
	ft_putendl_fd (rrb, 1);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(stack_a) < 2 || ft_lstsize(stack_b) < 2)
		return (-1);
	reverse(stack_a);
	reverse(stack_b);
	return (0);
}
