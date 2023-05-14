#include "push_swap.h"

t_list	init_stack(t_list **stack, int argc, char **arguments)
{
	t_list	*new;
	int		i;
	int		value;

	i = 0;

	arguments = ft_split(arguments, ' ');
	while (arguments[i] != NULL)
	{
		value = ft_atoi(arguments[i]);
		new = ft_lstnew(arguments[i]);
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

t_list	sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(stack_a) == 2)
		sa(stack_a);
	if (ft_lstsize(stack_a) == 3)
		sort3(stack_a);
	if (ft_lstsize(stack_a) > 3)
		sort_large(stack_a);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	t_list	**arguments;

	arguments = NULL;
	if (argc < 2)
		return (-1);
	stack_a = (t_list **) malloc(sizeof(t_list));
	stack_b = (t_list **) malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	if (argc == 2)
		validate(arguments);
	arguments = join_arguments(argv[1]);
	init_stack(stack_a, argc, arguments);
	sort(stack_a, stack_b);
}
