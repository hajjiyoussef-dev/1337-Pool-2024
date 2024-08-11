/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:36:38 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/04 17:39:14 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (n == i)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>

int main(void)
{
	char str[] ="youssefx";

	char dest[] = "youssefy";

	int n = 8; 
	printf("%d " , ft_strncmp(str , dest,n));
	return (0) ;
}
*/
