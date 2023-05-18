#include "push_swap.h"

void	send_to_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	int		cheapest_cost;

	temp = *stack_b;
	while (temp != NULL)
	{
		assign_a(stack_a);
		assign_b(stack_b);
		temp->target_pos = find_target_index(stack_a, stack_b);
		cheapest_cost = find_cheapest_cost(stack_a, stack_b);
		temp->cheapest_pos = find_cheapest_pos(stack_a, stack_b);
		rearrange(stack_a, stack_b, &cheapest_cost);
		temp = temp->next;
	}
}