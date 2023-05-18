#include "push_swap.h"

int	find_midpoint(t_list **stack)
{
	int		sum;
	int		i;

	sum = (*stack)->index;
	i = 0;
	while (*stack)
	{
		sum += (*stack)->index;
		(*stack) = (*stack)->next;
		i++;
	}
	if (sum % i == 0)
		return (sum / i);
	else
		return ((sum / i) + 1);
}

void	push_to_b(t_list **stack_a, t_list **stack_b, int *total_nodes, int *i)
{
	pb(stack_b, stack_a);
	total_nodes--;
	i--;
}

void	send_to_b(t_list **stack_a, t_list **stack_b, int *total_nodes)
{
	int		mid;
	int		i;

	mid = find_midpoint(stack_a);
	i = (*total_nodes / 2) + 1;
	while (i > 0)
	{
		if ((*stack_a)->index < mid)
			push_to_b(stack_a, stack_b, total_nodes, &i);
		else if ((*stack_a)->next->index < mid)
		{
			ra(stack_a);
			push_to_b(stack_a, stack_b, total_nodes, &i);
		}
		else if (ft_lstlast(*stack_a)->index < mid)
		{
			rra(stack_a);
			push_to_b(stack_a, stack_b, total_nodes, &i);
		}
		else
			ra(stack_a);
	}
}

void	send_to_b_by_midpoint(t_list **stack_a, t_list **stack_b)
{
	int	total_nodes;

	total_nodes = ft_lstsize(*stack_a) - 3;
	while (total_nodes > 0)
		send_to_b(stack_a, stack_b, &total_nodes);
}

