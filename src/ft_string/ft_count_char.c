#include "libft.h"

int	ft_count_char(char *s, char ref)
{
	int counter;

	counter = 0;
	while (*s)
	{
		if (ref == *s)
			counter++;
		s++;
	}
	return (counter);
}
