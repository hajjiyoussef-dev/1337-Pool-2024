/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:23:35 by yhajji            #+#    #+#             */
/*   Updated: 2024/07/28 21:33:14 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	help;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		help = tab[start];
		tab[start] = tab[end];
		tab[end] = help;
		start++;
		end--;
	}
}
