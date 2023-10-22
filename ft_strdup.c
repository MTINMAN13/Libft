#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dupe;
	size_t	i;

	dupe = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dupe == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		dupe[i] = str[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
