/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:59:32 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/06 13:51:28 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
}
/*#include <stdio.h> 

int main(void)
{
	printf("%d " , ft_recursive_power(5 , 2));

	return (0);
}*/
