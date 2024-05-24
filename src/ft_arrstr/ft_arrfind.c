/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:41:22 by mbriand           #+#    #+#             */
/*   Updated: 2024/05/24 20:02:04 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_arrfind(char **arr_of_str, char *ref)
{
	int i = 0;
	if (!arr_of_str)
		return (NULL);
	while (*arr_of_str)
	{
		if (ft_strcmp(*arr_of_str, ref) == 0)
			return (*arr_of_str);	
		arr_of_str++;
		i++;
	}
	//printf("%d\n", i);
	return (NULL);
}

int	main(void)
{
	char ref[] = "test=";
	char *test[] = {"llll=", "dnfkcjendjs", "hjxwx", "wej", "test="};

	if (ft_arrfind(test, ref) == NULL);
		ft_printf("don't exist in arr of str");
	return(0);
}
