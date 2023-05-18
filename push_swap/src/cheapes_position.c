#include "push_swap.h"

int find_cheapest_pos(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp_b;
	int		cheapest_cost;
	int		cost;
	int		cheapest_pos;

	temp_b = *stack_b;
	cheapest_cost = INT_MAX;
	while (temp_b != NULL)
	{
		cost = stack_b_cost(stack_b) + stack_a_cost(stack_a);
		if (cost < cheapest_cost)
		{
			cheapest_cost = cost;
			cheapest_pos = temp_b->pos_b;
		}
		temp_b = temp_b->next;
	}
	return (cheapest_pos);
}