/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:33:16 by sumdogan          #+#    #+#             */
/*   Updated: 2025/10/13 14:35:22 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	i = 0;
	total = 1;
	if (power == 0 && nb != 0)
	{
		return (1);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		total = nb * total;
		i++;
	}
	return (total);
}
