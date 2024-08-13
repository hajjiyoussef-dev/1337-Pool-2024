/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:38:09 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/12 13:42:56 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*array;

	size = max - min;
	i = 0;
	array = (int *) malloc(sizeof(int) * (size + 1));
	if (min >= max)
	{
		return (0);
	}
	if (array == 0)
	{
		return (-1);
	}
	while (min < max)
	{
		array[i++] = min;
		min++;
	}
	*range = array;
	return (size);
}
/*#include <stdio.h>

int main(void)
{
	int min = 10;
	int max = 10;
	int *rang ;
	ft_ultimate_range(&rang, min, max);
 	int i = 0;
	while ( i < (max -min))
	{
		printf("%d", rang[i]);
		i++;
	}
	printf("%d\n" ,  ft_ultimate_range(&rang, min, max));
	return (0);
}*/
