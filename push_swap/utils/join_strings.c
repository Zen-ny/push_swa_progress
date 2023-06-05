#include "push_swap.h"

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

