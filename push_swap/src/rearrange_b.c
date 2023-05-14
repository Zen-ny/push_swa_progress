#include "push_swap.h"

void    rearrange_b(t_list **stack_b, *int cost)
{
    int	ro_cost;
	int rr_cost;
    t_list  *temp;

    temp = *stack_b;
	ro_cost = temp->cheapest_pos;
	rr_cost = ft_lstsize(*stack_a) - ro_cost;
	while (temp != NULL)
		{
			while (temp->cheapest_pos != 0)
			{
				if (ro_cost < rr_cost)
					rb(stack_b);
				else
					rrb(stack_b);
				(*cost)--;
			}
            if (temp->cheapest_pos == 0)
                break;
			temp = temp_b->next;
		}
}