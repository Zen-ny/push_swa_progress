#include "push_swap.h"

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
