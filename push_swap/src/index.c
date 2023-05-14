/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:46:37 by naadam            #+#    #+#             */
/*   Updated: 2023/05/12 23:55:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;

	min = NULL;
	head = *stack;
	while (head)
	{
		if ((head->index == -1) && (!min || head->value < min->value))
			min = head;
		head->next = head;
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_min(stack);
	}
}
