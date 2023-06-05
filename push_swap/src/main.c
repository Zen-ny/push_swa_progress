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
	char	*arguments;

	arguments = (char *)malloc(1);
	if (argc >= 2)
	{
		arguments = join_arguments(argv, &arguments);
		validate_arguments(&arguments);
	}
	printf("%s\n", arguments);
    free(arguments);
    return (0);
}