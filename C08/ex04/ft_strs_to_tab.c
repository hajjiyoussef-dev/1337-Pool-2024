/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:06:27 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/14 15:42:43 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str, int len)
{
	char	*copy;
	int		i;

	copy = malloc(len + 1);
	if (!copy)
		return ((char *) 0);
	i = -1;
	while (str[++i])
		copy[i] = str[i];
	copy[i] = 0;
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (0);
	i = -1;
	while (++i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i], arr[i].size);
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
/*#include <stdio.h>
int main(void)
{
    char *strs[] = {"Hello", "world", "42", "School"};
    int ac = 4;
    struct s_stock_str *arr = ft_strs_to_tab(ac, strs);

    for (int i = 0; i < ac; i++)
    {
        printf("Original String: %s\n", arr[i].str);
        printf("Copy of String: %s\n", arr[i].copy);
        printf("Length of String: %d\n\n", arr[i].size);
    }

    return 0;
}*/
