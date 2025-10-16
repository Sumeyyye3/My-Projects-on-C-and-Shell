/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:51:26 by sumdogan          #+#    #+#             */
/*   Updated: 2025/10/04 16:09:53 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	empty;

	i = 0;
	while (i < size / 2)
	{
		empty = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = empty;
		i++;
	}
}
