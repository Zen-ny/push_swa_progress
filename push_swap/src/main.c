#include "push_swap.h"

t_list	**init_stack(t_list **stack_a, char **arguments)
{
	t_list	*new;
	int		i;
	int		value;

	i = 0;
	arguments = ft_split(*arguments, ' ');
	{
		value = ft_atoi(arguments[i]);
		new = ft_lstnew(&value);
		free(arguments[i]);
		ft_lstadd_back(stack_a, new);
		i++;
	}
	index_stack(stack_a);
	return (stack_a);
}

void	sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize((*stack_a)) == 2)
		sa(stack_a);
	if (ft_lstsize((*stack_a)) == 3)
		sort_tatu(stack_a);
	if (ft_lstsize((*stack_a)) > 3)
		sort_large(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	**arguments;

	arguments = NULL;
	if (argc < 2)
		return (-1);
	stack_a = (t_list **)malloc(sizeof(t_list *));
	stack_b = (t_list **)malloc(sizeof(t_list *));
	if (argc == 2)
		validate(argv[1]);
	arguments = join_arguments(argv);
	stack_a = init_stack(stack_a, arguments);
	sort(stack_a, stack_b);
	if (check_sorted(stack_a) == 1)
		sort(stack_a, stack_b);
	ft_lstclear(stack_a, del);
	ft_lstclear(stack_b, del);
}
