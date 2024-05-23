/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrstr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:54:19 by mbriand           #+#    #+#             */
/*   Updated: 2024/05/23 17:33:54 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRSTR_H
# define FT_ARRSTR_H

void	ft_arrfree(char **str_array);
int		ft_arrlen(char **str);
char	**ft_arrcat(char **array, char *str);
void	ft_arrprintf(char **arr_of_str);
char	**ft_arrjoin(char **fst_array, char **snd_array);

#endif