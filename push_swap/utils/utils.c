#include "push_swap.h"

int check_sorted(t_list **stack_a)
{
	t_list	*head;

	head = *stack_a;
	while (head)
	{
		if (head->value > head->next->value)
			return (1);
		head = head->next;
	}
    return (0);
}


void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

int	ft_min(t_list **stack_a)
{
	t_list	*head;
	t_list	*min;
	int		i;

	head = *stack_a;
	min = NULL;
	i = min->value;
	while (head != NULL)
	{
		if (head->value < i)
			i = head->value;
		head = head->next;
	}
	return (i);
}

int	ft_max(t_list **stack_a)
{
	t_list	*head;
	t_list	*max;
	int		i;

	head = *stack_a;
	max = NULL;
	i = max->value;
	while (head != NULL)
	{
		if (head->value > i)
			i = head->value;
		head = head->next;
	}
	return (i);
}