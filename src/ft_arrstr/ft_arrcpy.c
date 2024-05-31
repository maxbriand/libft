/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:57:38 by mbriand           #+#    #+#             */
/*   Updated: 2024/05/31 21:18:46 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// cpy string by string from src to dest
char	**ft_arrcpy(char **dest, char **src)
{
	char	**store_dest;
	
	store_dest = dest;
	if (!src)
		return (NULL);
	while (*src)
	{
		*dest = ft_strdup(*src);
		dest++;
		src++;	
	}
	return (store_dest);
}

int	main(void)
{
	char *src[] = {"hello", "world", "I am", "the goat", NULL};
	
	int size_of_dest = ft_arrlen(src) + 1;
	char **dest = malloc(sizeof(char *)* size_of_dest);
	ft_arrcpy(dest, src);
	ft_arrprintf(dest);
	return (0);	
}
