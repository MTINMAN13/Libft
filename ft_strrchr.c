#include "libft.h"

// returns a pointer to the LAST occurrence of character c in the string s
// or to the null byte at the end if none

char	*ft_strrchr(const char *s, int c)
{
	int	cloc;
	int	buffer;

	cloc = -1;
	buffer = 0;
	if (s == NULL)
		return (NULL);
	while (s[buffer] != '\0') {
		if (s[buffer] == c) {
			cloc = buffer;
		}
		buffer++;
	}
	if (cloc == -1)
		return (NULL);
	return ((char *)(s + buffer));
}
