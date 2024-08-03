/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:24:01 by yhajji            #+#    #+#             */
/*   Updated: 2024/08/03 10:04:46 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	if_alpha(	char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (if_alpha(str[i]))
		{
			if (j == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (j == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
