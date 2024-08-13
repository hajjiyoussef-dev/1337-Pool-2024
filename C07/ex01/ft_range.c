/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:21:04 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/12 16:25:20 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*tab;

	i = 0;
	len = max - min;
	tab = (int *) malloc(sizeof(int) * len);
	if (!tab)
	{
		return (0);
	}
	while (i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*#include <stdio.h>
int main(void)
{
	int min = 5;
	int max = 10;
	int *tab = ft_range(min , max);
	int i  = 0;
	while ( i  < (max - min))
	{
		printf("%d " , tab[i]);
		i++; 
	}
	return (0) ;
}*/
