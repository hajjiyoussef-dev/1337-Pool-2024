/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:32:03 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/06 11:58:24 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		nb *= nb;
		i++;
	}
	return (nb);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d " , ft_iterative_power(2 , 2));
	return (0);
}*/
