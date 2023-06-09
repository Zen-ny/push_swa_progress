/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:46:37 by naadam            #+#    #+#             */
/*   Updated: 2023/05/16 16:31:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_min(t_list *stack)
{
	t_list	*head;
	t_list	*min;

	min = NULL;
	head = stack;
	while (head)
	{
		if ((head->index == -1) && (!min || head->value < min->value))
			min = head;
		head++;
	}
	return (min);
}

void	index_stack(t_list **stack_a)
{
	t_list	*head;
	int		index;

	index = 0;
	head = *stack_a;
	head = get_min(head);
	while (head)
	{
		head->index = index++;
		head = get_min(head);
	}
	// return ;
}
