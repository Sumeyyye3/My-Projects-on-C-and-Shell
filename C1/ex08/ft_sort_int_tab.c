/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:18:51 by sumdogan          #+#    #+#             */
/*   Updated: 2025/10/04 16:44:04 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	empty;

	j = 0;
	empty = 0;
	while (j < size - 1)
	{
		if (tab[j] > tab[j + 1])
		{
			empty = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = empty;
			j = 0;
		}
		else
		{
			j++;
		}
	}
}
