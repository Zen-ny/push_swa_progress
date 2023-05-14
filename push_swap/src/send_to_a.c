#include "push_swap.h"

void	send_to_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	int		target;
	int		pos_a;
	int		pos_b;
	int		cheapest_pos;

	temp = *stack_b;
	while (temp != NULL)
	{
		assign_a(stack_a);
		assign_b(stack_b);
		target_pos = find_target_index(stack_a, stack_b);
		cheapest_cost = find_cheapest_pos(stack_a, stack_b);
		rearrange(stack_a, &cheapest_cost, stack_b);
		temp = temp->next;
	}
}