#include "push_swap.h"

void	join_arguments(char **argv)
{
	int		i;
	char	**arguments;

	i = 1;
	*arguments = ft_calloc(1);
	while (argv[i] != '\0')
	{
		if (!argv[i][0])
			ft_error();
		*arguments = strjoin((*arguments), argv[i]);
		*arguments = strjoin((*arguments), ' ');
		i++;
	}
	validate(arguments);
	return (arguments);
}

void	validate(char **arguments)
{
	int		i;
	int		j;
	char	*argu;

	i = 0;
	j = 1;
	argu = *arguments;
	if (argu[i] != 0)
	{
		if (argu[0] == ' ')
			ft_error();
		check_int(argu);
		sig_check(argu);
		check_dup(argu);
	}

}

void	sig_check(char *arguments)
{
	int	j;

	j = 1;
	while (argu[j] != '\0')
	{
		if ((argu[j] == '-' || argu[j] == '+') && (argu[j - 1] != ' '))
			ft_error();
		j++;
	}
}

void	check_dup(char	*argu)
{
	int	i;

	i = 0;
	while (argu[i])
	{
		j = i + 1;
		while (argu[j])
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
	int		i;
	char	*str;

	i = 0;
	str = "0123456789";
	while (argu[i])
	{
		if (ft_isdigit(argu[i]) == 0)
			ft_error();
		i++;
	}
}