#include "push_swap.h"

int	reverse(t_list **stack)
{
	t_list	*head;
	t_list	*tail;
	t_list	*tmp;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tmp = head;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tmp = tmp->next;
	*stack = tail;
	return (0);
}

int	rra(t_list **stack_a)
{
	if (reverse(stack_a) == -1)
		return (-1);
	ft_putstr_fd("rra\n", 1);
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (reverse(stack_b) == -1)
		return (-1);
	ft_putstr_fd ("rrb\n", 1);
	return (0);
}
