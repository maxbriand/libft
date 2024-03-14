/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:43:25 by mbriand           #+#    #+#             */
/*   Updated: 2023/12/04 19:38:18 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include "libft.h"

// ft_printf functions
int		ft_printf(const char *s, ...);
int		ft_parser(char c, va_list args);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_nbr(int n);
int		ft_print_unnbr(unsigned int n);
int		ft_print_hexanbr(unsigned int n, char x);
int		ft_print_pt(unsigned long long n, char x, int d);
void	ft_up_or_low(int n, char x);

// print using write and specific fd
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif