/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:09:12 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/05 18:46:14 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	a = nb;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		a = a * i;
		i++;
	}
	return (a);
}
/*#include <stdio.h> 

int main(void)
{
	printf("%d " , ft_iterative_factorial(11)); 
	return (0);
}
*/
