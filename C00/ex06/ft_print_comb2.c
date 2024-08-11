/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 01:39:42 by yhajji            #+#    #+#             */
/*   Updated: 2024/07/27 21:49:10 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_number(int nbr1, int nbr2)
{
	ft_putchar((nbr1 / 10) + '0');
	ft_putchar((nbr1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((nbr2 / 10) + '0');
	ft_putchar((nbr2 % 10) + '0');
	if (nbr1 != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_number(a, b);
			b++;
		}
		a++;
	}
}
