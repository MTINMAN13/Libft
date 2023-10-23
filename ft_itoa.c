
#include "libft.h"

static int	size(int i)
{
	size_t	size;

	if (i == 0)
		return (2);
	size = 1;
	if (i < 0)
	{
		i /= 10;
		size += 2;
		i = -i;
	}
	while (i > 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	int			sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = size(n);
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	str = (char *)malloc(len);
	if (str == NULL)
		return (NULL);
	str[--len] = '\0';
	while (--len >= sign)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
