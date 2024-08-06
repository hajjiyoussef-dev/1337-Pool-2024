/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:27:30 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/06 16:10:56 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		if (nb == (i * i))
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main(void)
{
	printf("%d " , ft_sqrt(100));

	return (0);
}*/
