#include "push_swap.h"

void	assign_a(t_list **stack_a)
{
	int		pos_a;
	t_list	*temp;

	pos_a = 0;
	temp = *stack_a;
	while (temp != NULL)
	{
		if (temp->index != -1)
			temp->pos_a = pos_a++;
		temp = temp->next;
	}
	return ;
}

void	assign_b(t_list **stack_b)
{
	int		pos_b;
	t_list	*temp;

	pos_b = 0;
	temp = *stack_b;
	while (temp != NULL)
	{
		if (temp->index != -1)
			temp->pos_b = pos_b++;
		temp = temp->next;
	}
	return ;
}
