/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:13:29 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/14 22:54:50 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	long	nbl;
	int		mod;

	nbl = nb;
	if (nbl < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	if (nbl > 9)
		ft_putnbr(nbl / 10);
	mod = (nbl % 10) + 48;
	write(1, &mod, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*#include <stdio.h>
t_stock_str ft_strs_to_tab(int ac, char **strs);
int main(void)
{
    char *strs[] = {"Hello", "world", "42", "School"};
	t_stock_str arr = ft_strs_to_tab(4, strs);
    ft_show_tab(&arr);

   // ft_show_tab(arr);
    return 0;
}*/
