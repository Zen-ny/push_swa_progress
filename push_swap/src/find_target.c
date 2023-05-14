#include "push_swap.h"

int	target(t_list **stack_a, t_list **stack_b)
{
	int min_diff;
	int	diff;
	int target;
	t_list	*temp_a;

	temp_a = *stack_a;
	target = 0;
	min_diff = INT_MAX;
	while (temp_a)
	{
		diff = temp_a->index - (*stack_b)->index;
		if (diff > 0 && diff < min_diff)
		{
			min_diff = diff;
			target = temp_a->pos_a;
		}
		temp_a = temp_a->next;
	}
	return (target);
}