/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:24:32 by naadam            #+#    #+#             */
/*   Updated: 2023/05/02 16:12:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_large(t_list **stack_a, t_list **stack_b)
{
	send_to_b_by_midpoint(stack_a, stack_b);
	send_to_a(stack_a, stack_b);
}
