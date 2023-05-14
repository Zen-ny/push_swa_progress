/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:43:04 by naadam            #+#    #+#             */
/*   Updated: 2023/04/23 14:12:54 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	sort3(t_list **stack_a)
{
	t_list	*head;

	head = *stack_a;
	check_sorted(stack_a);
	if (head->value == ft_min(stack_a))
	{
		sa(stack_a);
		ra(stack_a);
	}
	if (ft_lstlast(head)->value == ft_max(stack_a))
		sa(stack_a);
	if (ft_max(stack_a) == head->value
		&& ft_lstlast(head)->value != ft_min(stack_a))
		ra(stack_a);
	if (ft_lstlast(head)->value == ft_min(stack_a)
		&& head->value != ft_max(stack_a))
		rra(stack_a);
	else
	{
		sa(stack_a);
		rra(stack_a);
	}
}
