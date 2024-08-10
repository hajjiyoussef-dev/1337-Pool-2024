/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:52:31 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/06 14:26:28 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
/*#include <stdio.h>
int main(void)
{
	printf("%d " , ft_fibonacci(19) );
	return (0);
}*/	
