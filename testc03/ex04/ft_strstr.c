/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:27:19 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/03 20:44:39 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0' )
	{
		if (str[i] == to_find[0])
		{
			k = i;
			j = 0;
			while (str[i] == to_find[j] && str[i] != '\0' && to_find[j] != '\0')
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (str + k);
		}
		i++;
	}
	return (0);
}
