#include "libft.h"

// returns a pointer to the LAST occurrence of character c in the string s
// or to the null byte at the end if none

char	*ft_strrchr(const char *s, int c)
{
	char	*occurance;

	occurance = NULL;
	if (c == '\0')
		return ((char*)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			occurance = (char *)s;
		s++;
	}
	return (occurance);
}
