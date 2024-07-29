/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:39:28 by yhajji            #+#    #+#             */
/*   Updated: 2024/07/27 19:00:14 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int nbr1, int nbr2, int nbr3)
{
	ft_putchar(nbr1 + '0');
	ft_putchar(nbr2 + '0');
	ft_putchar(nbr3 + '0');
	if (nbr1 < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_number(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
