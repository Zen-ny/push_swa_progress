#include "push_swap.h"

t_list	find_cheapest_cost(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp_b;

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
	return (cheapest_cost);
}

int	stack_b_cost(t_list **stack_b)
{
	int	f_a;
	int	f_b;
	int	cost_b;
	t_list	**temp_b;
	int	c_pos;

	f_a = 0;
	temp_b = stack_b;
	while ((*temp_b) != 0)
	{
		c_pos = (*temp_b)->pos_b
		while ((*temp_b)->c_pos != 0)
		{
			c_pos--;
			f_a++;
		}
		(*temp_b) = (*temp_b)->next;
	}
	fb = ft_lstsize((*temp_b)) - f_a;
	if (fb < fa)
		cost_b = fb;
	else
		cost_b = fa;
	return (cost_b);
}

int	stack_a_cost(t_list **stack_a)
{
	int	f_a;
	int	f_b;
	int	cost_a;
	t_list	**temp_a;
	int	t_pos;

	f_a = 0;
	temp_a = stack_a;
	t_pos = (*temp_a)->target;
	if ((*temp_a)->t_pos != 0)
	{
		t_pos--;
		f_a++;
	}
	fb = ft_lstsize((*temp_a)) - f_a;
	if (fb < fa)
		cost_a = fb;
	else
		cost_a = fa;
	return (cost_a);
}
