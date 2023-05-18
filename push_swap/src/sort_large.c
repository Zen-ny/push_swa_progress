#include "push_swap.h"

void	sort_large(t_list **stack_a, t_list **stack_b)
{
	send_to_b_by_midpoint(stack_a, stack_b);
	send_to_a(stack_a, stack_b);
}

void	sort_tatu(t_list **stack_a)
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
