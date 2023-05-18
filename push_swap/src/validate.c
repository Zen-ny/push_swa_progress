#include "push_swap.h"

char	**join_arguments(char **argv)
{
	int		i;
	char	**arguments;

	i = 0;
	while (argv[i] != NULL)
		i++;
	arguments = (char **)malloc((i + 1 ) * (sizeof(char *)));
	arguments[i] = NULL;
	i = 0;
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
	if (arguments[0] != '\0' && arguments[0] != ' ')
	{
		check_int(arguments);
		sig_check(arguments);
		check_dup(arguments);
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
		if (argu[i] >= '0' && argu[i] <= '9')
			i++;
		if (argu[i] == ' ' && argu[i + 1] != ' ')
			i++;
		else
			ft_error();
	}
}