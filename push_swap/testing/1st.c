# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>
# include <string.h>

int	ft_countstr(char const *s, char c)
{
	int	i;
	int	strc;

	i = 0;
	strc = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (i != 0 && s[i] == c && s[i - 1] != c && s[i - 1] != '\0')
			strc++;
		i++;
	}
	if (s[i] == '\0' && s[i - 1] != c)
		strc++;
	return (strc);
}

char	*malloc_str(const char *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	if (!str)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		w;

	w = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc((ft_countstr(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
		{
			str[w] = malloc_str(s, c);
			w++;
			while (*s != c && *s)
				s++;
		}
	}
	str[w] = NULL;
	return (str);
}

int	ft_isalnum(int a)
{
	if ((a >= 48 && a <= 57) || a == 32 || a == '-' || a == '+')
		return (0);
	else
		return (1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*jo;

	if (!s1 || !s2)
		return (NULL);
	i = strlen(s1);
	j = strlen(s2);
	jo = (char *)malloc(i + j + 1);
	if (!jo)
		return (NULL);
	memcpy(jo, s1, i);
	memcpy(jo + i, s2, j + 1);
	free((void *)s1);
	return (jo);
}

char	*join_arguments(char **argv, char **arguments)
{
	int	i;
	
	i = 1;
    while (argv[i] != NULL)
	{
		if (!argv[i][0])
			printf("%s\n", "Error");
		*arguments = ft_strjoin(*arguments, argv[i++]);
		*arguments = ft_strjoin(*arguments, " ");
	}
	return (*arguments);
}

int	check_sign(char *temp)
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

int	validate_arguments(char	**arguments, char **argv)
{
	int		i;
	char	**temp;
	char	*dupchecker;

	i = 0;
	dupchecker = NULL;
	while ((*arguments)[i] != '\0')
	{
		if (ft_isalnum((*arguments)[i]) == 1 && (*arguments)[i] != '\0')
			return (1);
		i++;
	}
	i = 0;
	temp = ft_split(*arguments, ' ');
	while (temp[i] != NULL)
	{
		if (check_sign(temp[i]) == 1)
			return (1);
		i++;
	}
	i = 0;
	dupchecker = ft_strjoin(*arguments, argv[i++]);
	printf("%s\n", dupchecker);
	// i = 0;
	// if (check_dup(dupchecker) == 1)
	// 	return (1);
	return (0);
}

// int	check_dup(int *dupchecker)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (dupchecker[i] != '\0')
// 	{
// 		j = i + 1;
// 		while (dupchecker[j] != '\0')
// 		{
// 			if  (dupchecker[j] == dupchecker[i])
// 				return (1);
// 			j++;
// 		}
// 		i++;
// 	}
// }

int	main(int argc, char **argv)
{
	char	*arguments;

	arguments = (char *)malloc(1);
	if (argc >= 2)
	{
		arguments = join_arguments(argv, &arguments);
		if (validate_arguments(&arguments, argv) == 1)
			printf ("%s\n", "Error");
	}
	//printf("%s\n", arguments);
    free(arguments);
    return (0);
}