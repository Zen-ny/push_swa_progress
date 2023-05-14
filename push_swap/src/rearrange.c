#include "push_swap.h"

void	rearrange(t_list **stack_a, t_list **stack_b, int *cost)
{
	int	ro_cost;
	int rr_cost;
	t_list	*temp;

	temp = *stack_a;
	ro_cost = temp->target_pos;
	rr_cost = ft_lstsize(*stack_a) - ro_cost;
	while (*cost >= 0)
	{
		while (temp != NULL)
		{
			while (temp->target_pos != 0)
			{
				if (ro_cost < rr_cost)
					ra(stack_a);
				else
					rra(stack_a);
				(*cost)--;
			}
			if (temp->target_pos == 0)
				break;
			temp = temp->next;
		}
		rearrange_b(stack_b, cost);
	}
}
