#include "push_swap.h"

void	assign_a(t_list *stack_a)
{
	int	pos_a;

	pos_a = NULL;
	while (stack_a != NULL)
	{
		if (stack_a->index != -1)
			stack_a->pos_a = pos_a++;
		stack_a = stack_a->next;
	}
}

void	assign_b(t_list *stack_b)
{
	int	pos_b;

	pos_b = NULL;
	while (stack_b != NULL)
	{
		if (stack_b->index != -1)
			stack_b->pos_b = pos_b++;
		stack_b = stack_b->next;
	}
}
