#include "push_swap.h"

char	*join_arguments(char **argv, char **arguments)
{
	int	i;
	
	i = 1;
	while (argv[i] != NULL)
	{
		if (!argv[i][0])
			ft_error();
		*arguments = ft_strjoin(*arguments, argv[i++]);
		*arguments = ft_strjoin(*arguments, " ");
	}
	return (*arguments);
}

int	validate_arguments(char	**arguments)
{
	int		i;
	char	**temp;

	i = 0;
	while ((*arguments)[i] != '\0')
	{
		if (ft_isalnum((*arguments)[i]) == 0)
			return (1);
		i++;
	}
	i = 0;
	temp = ft_split(*arguments, ' ');
	while (temp[i] != '\0')
	{
		if (check_sign(&temp[i]) == 1)
			return (1);
		i++;
	}
}

int	check_sign(int *temp)
{
	int	i;
	int	j;

	i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] == '-' || temp[i] == '+')
		{
			j = i + 1;
			if (!(temp[j] >= 48 && temp[j] <= 56))
				return (1);
		}
		i++;
	}
	return (0);
}