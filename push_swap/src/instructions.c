/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:00:00 by naadam            #+#    #+#             */
/*   Updated: 2023/05/13 12:39:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Swapping elements

int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		tmp_value;
	int		tmp_index;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head || !next)
		return (-1);
	tmp_value = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp_value;
	next->index = tmp_index;
	return (0);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd(sa, 1);
	return (0);
}

int	push(t_list **stack_to, t_list **stack_from)
{
	t_list	*head_from;
	t_list	*head_to;
	t_list	*tmp;

	if (ft_lstsize(head_from) == 0)
		return (-1);
	head_from = *stack_from;
	head_to = *stack_to;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}
