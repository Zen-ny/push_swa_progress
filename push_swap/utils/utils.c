/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:18:42 by naadam            #+#    #+#             */
/*   Updated: 2023/04/20 20:50:02 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		free(str[i--]);
	}
}

int	ft_min(t_list **stack_a)
{
	t_list	*head;
	t_list	*min;
	int		i;

	head = *stack_a;
	min = NULL;
	i = min->value;
	while (head)
	{
		if (i == NULL || head->value < i)
		{
			i = head;
		}
		head = head->next;
	}
	return (i);
}

int	ft_max(t_list **stack_a)
{
	t_list	*head;
	t_list	*max;
	int		i;

	head = *stack_a;
	max = NULL;
	i = max->value;
	while (head)
	{
		if (i == NULL || head->value > i)
		{
			i = head;
		}
		head = head->next;
	}
	return (i);
}
