#include "libft.h"

// Malloc inside: return 0 = failed
// Get a pointer on new string cut at 'c' pos of str
// Return str if c is not found
char *ft_strcut(char *str, char c)
{
	char	*cutstr;
	size_t	cutstr_len;

	if (ft_strchr(str, c) == 0)
		return (str);
	cutstr_len = ft_strchr(str, c) - str;
	cutstr = ft_substr(str, 0, cutstr_len);
	return (cutstr);
}
