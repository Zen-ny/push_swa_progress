#include "push_swap.h"

char	**join_arguments(char **argv)
{
	int		i;
	char	**arguments;

	i = 1;
	arguments = ft_calloc(1, sizeof(char *));
	while (argv[i] != NULL)
	{
		if (!argv[i][0])
			ft_error();
		*arguments = ft_strjoin(*arguments, argv[i]);
		*arguments = ft_strjoin(*arguments, " ");
		i++;
	}
	validate(*arguments);
	return (arguments);
}

void	validate(char *arguments)
{
	int		i;
	char	*argu;

	i = 0;
	argu = arguments;
	if (argu[i] != 0)
	{
		if (argu[0] == ' ')
			ft_error();
		check_int(argu);
		sig_check(argu);
		check_dup(argu);
	}

}

void	sig_check(char *argu)
{
	int	j;

	j = 1;
	while (argu[j] != '\0')
	{
		if ((argu[j] == '-' || argu[j] == '+') 
			&& (argu[j - 1] != ' '))
			ft_error();
		j++;
	}
}

void	check_dup(char	*argu)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argu[i] != '\0')
	{
		j = i + 1;
		while (argu[j] != '\0')
		{
			if (argu[j] == argu[i])
				ft_error();
			j++;
		}
		i++;
	}
}

void	check_int(char *argu)
{
	int	i;

	i = 0;
	while (argu[i] != '\0')
	{
		if (ft_isdigit(argu[i]) == 0)
			ft_error();
		i++;
	}
}