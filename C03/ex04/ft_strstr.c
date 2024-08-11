/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:27:19 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/10 20:46:40 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0' )
	{
		j = 0;
		while (str[i + j] != '\0' && (str[i + j] == to_find[j]))
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h> 
int main(void)
{
	char str[] = " hello hajji hello youssef";
	char *to_find = "aj";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
