/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:49:10 by naadam            #+#    #+#             */
/*   Updated: 2023/04/27 17:54:12 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sorted(t_list **stack_a)
{
	t_list	*head;

	head = *stack_a;
	while (head)
	{
		if (head->value > head->next->value)
			ft_error();
		head = head->next;
	}
}
